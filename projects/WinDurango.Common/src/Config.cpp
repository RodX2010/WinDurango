#include "Config.h"

std::string jsonTemplate = R"({
    "gamertag": "Durangler1",
    "gamerscore": 900,
    "controls": {
        "Up": 1, 
        "Down": 2,
        "Left": 4,
        "Right": 8,
        "Start": 10,
        "Back": 20,
        "LeftTrigger": 40,
        "RightTrigger": 80,
        "LeftShoulder": 100,
        "RightShoulder": 200,
        "A": 1000,
        "B": 2000,
        "X": 4000,
        "Y": 8000
    },
    "keyboard": {
        "WM": 87,
        "AM": 65,
        "SM": 83,
        "DM": 68,
        "A": 90,
        "B": 88,
        "X": 67,
        "Y": 86,
        "Up": 26,
        "Down": 28,
        "Left": 25,
        "Right": 27,
        "Menu": 13,
        "View": 27,
        "LeftThumb": 160,
        "RightThumb": 161,
        "LeftShoulder": 162,
        "RightShoulder": 163,
        "LeftTrigger": 1,
        "RightTrigger": 2
    }
})";

bool wd::common::Config::parse()
{
    try
    {
        if (!pDirectory->fileExists("winDurango.json")) {
            pFile = pDirectory->CreateFile("winDurango.json");
            pFile->open();
            pFile->write(jsonTemplate);
        } else {
            pFile = pDirectory->CreateFile("winDurango.json");
            pFile->open();
        }
        std::string jsonData = pFile->read();
        data = nlohmann::json::parse(jsonData);
        return true;
    }
    catch (const std::exception &e)
    {
        return false;
    }
    catch (...)
    {
        return false;
    }
}

const nlohmann::json& wd::common::Config::jsonData() 
{ 
    return data; 
}

const nlohmann::json &wd::common::Config::operator[](std::string node)
{
    return data[node];
}