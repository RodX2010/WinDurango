<a id="readme-top"></a>

<!-- PROJECT SHIELDS -->
<!--
*** I'm using markdown "reference style" links for readability.
*** Reference links are enclosed in brackets [ ] instead of parentheses ( ).
*** See the bottom of this document for the declaration of the reference variables
*** for contributors-url, forks-url, etc. This is an optional, concise syntax you may use.
*** https://www.markdownguide.org/basic-syntax/#reference-style-links
-->
[![Contributors][contributors-shield]][contributors-url]
[![Forks][forks-shield]][forks-url]
[![Stargazers][stars-shield]][stars-url]
[![Issues][issues-shield]][issues-url]
[![project_license][license-shield]][license-url]

<!-- PROJECT LOGO -->
<br />
<div align="center">
  <a href="https://codeberg.org/WinDurango/WinDurango">
    <img src="https://codeberg.org/WinDurango/WinDurango/raw/branch/main/assets/logo/128.png" alt="Logo" width="80" height="80">
  </a>

<h3 align="center">WinDurango</h3>
  <p align="center">
    <br />
    WinDurango is an Xbox One Translation Layer which enables you to play various ERA based UWP Games on Windows.
    <a href="https://codeberg.org/WinDurango/WinDurango/issues">Report Bug</a>
    &middot;
    <a href="https://codeberg.org/WinDurango/WinDurango/issues">Request Feature</a>
  </p>
</div>



<!-- TABLE OF CONTENTS -->
<details>
  <summary>Table of Contents</summary>
  <ol>
    <li>
      <a href="#about-the-project">About The Project</a>
      <ul>
        <li><a href="#playable-games">Playable Games</a></li>
      </ul>
    </li>
    <li>
      <a href="#getting-started">Getting Started</a>
      <ul>
        <li><a href="#prerequisites">Prerequisites</a></li>
        <li><a href="#building">Building</a></li>
        <li><a href="#installation">Installation</a></li>
      </ul>
    </li>
    <li><a href="#roadmap">Roadmap</a></li>
    <li><a href="#contributing">Contributing</a></li>
    <li><a href="#license">License</a></li>
    <li><a href="#contact">Contact</a></li>
    <li><a href="#disclaimer">Disclaimer</a></li>
  </ol>
</details>



<!-- ABOUT THE PROJECT -->
## About The Project

[![Product Name Screen Shot][product-screenshot]](https://codeberg.org/WinDurango/WinDurango)

WinDurango is an Xbox One Translation Layer which enables you to play various ERA based UWP Games on Windows. Currently WinDurango has implemented winrt, kernelx, d3d11. Kinect isn't supported currently but may be supported later.



### Playable Games

 - Sonic Mania - Playable
 - Minecraft 1.2.0.0 - Playable
 - Minecraft 1.61 - Boots
 - LIMBO - Playable
 - FH2 - Boots
 - FH5 - Boots
 - Peggle 2 - Boots



<!-- GETTING STARTED -->
## Getting Started

Before Building WinDurango make sure you install the prerequisites.

### Prerequisites

Make sure you have Visual Studio 2026 with the C++ Extension, vcpkg and cmake.

### Building

1. Open up the `VS 2026 Powershell Prompt`
2. Clone the repo
   ```sh
   git clone https://codeberg.org/WinDurango/WinDurango
   ```
3. Install VCPKG packages
   ```sh
   vcpkg install
   ```
4. Prep CMake
   ```sh
    mkdir build && cd build
    cmake ..
   ```
5. Build WinDurango
   ```sh
   cmake --build .
   ```

### Installation

1. Get WinDurango Dll's from `build/bin/Debug`
2. Copy the Dll's into the Mount Dir in your Game
3. Enable Developer Mode
3. Install the Game
   ```sh
   Add-AppXPackage -Register .\AppxManifest.xml
   ```


<!-- ROADMAP -->
## Roadmap

- [ ] Minecraft 1.61
- [ ] FH2 Playable
- [ ] FH5 Playable
- [ ] Peggle Playable


<!-- CONTRIBUTING -->
## Contributing

Contributions are what make the open source community such an amazing place to learn, inspire, and create. Any contributions you make are **greatly appreciated**.

If you have a suggestion that would make this better, please fork the repo and create a pull request. You can also simply open an issue with the tag "enhancement".
Don't forget to give the project a star! Thanks again!

1. Fork the Project
2. Create your Feature Branch (`git checkout -b feature/AmazingFeature`)
3. Commit your Changes (`git commit -m 'Add some AmazingFeature'`)
4. Push to the Branch (`git push origin feature/AmazingFeature`)
5. Open a Pull Request


<!-- LICENSE -->
## License

Distributed under the project_license. See `LICENSE.txt` for more information.



<!-- CONTACT -->
## Contact

Join our [Discord](https://discord.gg/mHN2BgH7MR)



<!-- DISCLAIMER -->
## Disclaimer

The goal of this project is to experiment, research, and educate on the topic of emulation of modern devices and operating systems. It is not for enabling illegal activity. All information is obtained via reverse engineering of legally purchased devices and games and information made public on the internet (you'd be surprised what's indexed on Google...). We are not any way affiliated with Microsoft.

## Credits
Thanks to 
- @othneildrew for `Best Readme Template`


<!-- MARKDOWN LINKS & IMAGES -->
<!-- https://www.markdownguide.org/basic-syntax/#reference-style-links -->
[contributors-shield]: https://img.shields.io/github/contributors/WinDurango/WinDurango.svg?style=for-the-badge
[contributors-url]: https://github.com/WinDurango/WinDurango/graphs/contributors
[forks-shield]: https://img.shields.io/github/forks/WinDurango/WinDurango.svg?style=for-the-badge
[forks-url]: https://github.com/WinDurango/WinDurango/network/members
[stars-shield]: https://img.shields.io/github/stars/WinDurango/WinDurango.svg?style=for-the-badge
[stars-url]: https://github.com/WinDurango/WinDurango/stargazers
[issues-shield]: https://img.shields.io/github/issues/WinDurango/WinDurango.svg?style=for-the-badge
[issues-url]: https://github.com/WinDurango/WinDurango/issues
[license-shield]: https://img.shields.io/github/license/WinDurango/WinDurango.svg?style=for-the-badge
[license-url]: https://github.com/WinDurango/WinDurango/blob/master/LICENSE.txt
[product-screenshot]: https://codeberg.org/WinDurango/WinDurango/raw/branch/main/assets/demo.png