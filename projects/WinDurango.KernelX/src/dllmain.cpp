#include "Hooks.h"
#include "kernelx.h"
#include "Logan.h"

static DWORD ReasonForCall = 0;

void KernelxInitialize(HINSTANCE hinstDLL)
{
    if (!GetConsoleWindow())
    {
        AllocConsole();
        FILE *f;
        freopen_s(&f, "CONOUT$", "w", stdout);
        freopen_s(&f, "CONOUT$", "w", stderr);
        freopen_s(&f, "CONIN$", "r", stdin);

        SetConsoleTitleW(L"WinDurango");
    }

    if (ReasonForCall == DLL_PROCESS_ATTACH || ReasonForCall == DLL_THREAD_ATTACH)
    {
        DetourRestoreAfterWith();
        DetourTransactionBegin();
        DetourUpdateThread(GetCurrentThread());
        XWinePatchImport(GetModuleHandleW(nullptr), GetRuntimeModule(),
                         "?GetActivationFactoryByPCWSTR@@YAJPEAXAEAVGuid@Platform@@PEAPEAX@Z",
                         GetActivationFactoryRedirect);

        //This is needed for DXVK.
        if (!User32) User32 = LoadLibraryA("user32.dll");
        if (User32)
        {
            FARPROC CreateWindowInBandEx = GetProcAddress(User32, "CreateWindowInBandEx");
            TrueCreateWindowInBandEx = reinterpret_cast<PCreateWindowInBandEx>(CreateWindowInBandEx);
            DetourAttach(&reinterpret_cast<PVOID &>(TrueCreateWindowInBandEx), EraCreateWindowInBandEx);
        }

        DetourAttach(&reinterpret_cast<PVOID &>(TrueCoCreateInstance), EraCoCreateInstance);
        DetourAttach(&reinterpret_cast<PVOID &>(TrueDeviceIoControl), EraDeviceIoControl);
        DetourTransactionCommit();
    }
    else if (ReasonForCall == DLL_PROCESS_DETACH || ReasonForCall == DLL_THREAD_DETACH)
    {
        DetourTransactionBegin();
        DetourUpdateThread(GetCurrentThread());
        DetourDetach(&reinterpret_cast<PVOID &>(TrueCreateWindowInBandEx), EraCreateWindowInBandEx);
        DetourDetach(&reinterpret_cast<PVOID &>(TrueCoCreateInstance), EraCoCreateInstance);
        DetourDetach(&reinterpret_cast<PVOID &>(TrueDeviceIoControl), EraDeviceIoControl);
        DetourTransactionCommit();
    }
}

BOOL APIENTRY DllMain(HMODULE hModule, DWORD ul_reason_for_call, LPVOID lpReserved)
{
    InitializeCriticalSection(&XmpAllocationHookLock);
    if (DetourIsHelperProcess()) return TRUE;

    ReasonForCall = ul_reason_for_call;

    if (ul_reason_for_call != DLL_PROCESS_ATTACH)
    {
        ReasonForCall = ul_reason_for_call;
        return TRUE;
    }

    return QueueUserAPC([](ULONG_PTR dwParam) { KernelxInitialize(reinterpret_cast<HINSTANCE>(dwParam)); },
                        GetCurrentThread(), reinterpret_cast<ULONG_PTR>(hModule)) != 0;
}