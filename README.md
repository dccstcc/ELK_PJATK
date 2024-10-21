<!--
*** Thanks for checking out c. If you have a suggestion
*** that would make this better, please fork the repo and create a pull request
*** or simply open an issue with the tag "enhancement".
*** Thanks again! Now go create something AMAZING! :D
-->

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
[![LinkedIn][linkedin-shield]][linkedin-url]
[![NO LICENSE][license-shield]][license-url]

<!-- PROJECT LOGO -->
<br />
<p align="center">
  <a href="https://gdansk.pja.edu.pl/pl/">
    <img src="images/logo.jpg" alt="Logo" width="540" height="80">
  </a>

  <h2 align="center">Electronics</h2>

  <p align="center">
    <h3> Electronic embedded system with Arduino </h3>
    <!-- <br />
    <a href="https://github.com/dccstcc/ELK_PJATK"><strong>» go to CODE »</strong></a>
    <br />
    <br /> -->
    <!-- <a href="https://github.com/othneildrew/Best-README-Template">View Demo</a>
    ·
    <a href="https://github.com/othneildrew/Best-README-Template/issues">Report Bug</a>
    ·
    <a href="https://github.com/othneildrew/Best-README-Template/issues">Request Feature</a> -->
  </p>
</p>

<!-- TABLE OF CONTENTS -->
<details open="open">
  <summary>Table of Contents</summary>
  <ol>
    <li>
      <a href="#project-description">Project description</a>
      <ul>
        <li><a href="#libraries-and-frameworks">Libraries / Frameworks</a></li>
      </ul>
    </li>
    <li>
      <a href="native-deploy">Native deploy</a>
      <ul>
        <li><a href="#prerequisites">Prerequisites</a></li>
        <li><a href="#installation">Installation</a></li>
      </ul>
    </li>
    <li><a href="#how-to-use">How to use ?</a></li>
    <!-- <li><a href="#roadmap">Roadmap</a></li>
    <li><a href="#contributing">Contributing</a></li> -->
    <li><a href="#license">License</a></li>
    <li><a href="#contact">Contact with me</a></li>
    <!-- <li><a href="#acknowledgements">Acknowledgements</a></li> -->
  </ol>
</details>

<!-- ABOUT THE PROJECT -->

## Project description

In this project I wrote software for Arduino IDE in C++ language fork and deploy this software in Arduino board memory. After that I connected Arduino board with hardware prototype contains LED diodes, resistors, display and button. This built scheme is simulation of game cube which player can throw by press button. Random result of throw is possible to observe on the LED diodes and sum of results appear on the display.

### Libraries and frameworks

This project use technology below.

- [![cpp][cpp-shield]][cpp-url]
- [![arduino][arduino-shield]][arduino-url]

<!-- GETTING STARTED -->

## Native deploy

This is instructions on setting up this project locally.

### Prerequisites

Arduino IDE is required. <br/>
Arduino board is required. <br/>
Hardware prototype for Arduino project is need. <br/>

### Installation

1. Clone the repo
   ```sh
   git clone https://github.com/dominik-stec/Electronics.git
   ```
2. Go to folder with project for Arduino IDE
   ```sh
   cd ./LEDcube
   ```
3. Import project file into Arduino IDE

<!-- USAGE EXAMPLES -->

## How to use

After import project into Arduino IDE it is need to connect Arduino board by USB with computer and deploy project of software on arduino board.

<img src="images/2.jpg" width="300"/>

After write software on arduino board it is possible to disconnect board from USB and connect Arduino board with dedicated hardware prototype.

<img src="images/1.jpg" width="300"/>

<img src="images/3.jpg" width="300"/>

After complete connect a hardware prototytpe with Arduino for start work it is necessary to press the yellow button on prototype board. <br />
Now we can observe simulation of throw game cube mapped on LED diodes and sum of result on connected display.

<img src="images/4.jpg" width="300"/>

<!-- _For more examples, please refer to the [Documentation](https://example.com)_ -->

<!-- ROADMAP
## Roadmap

See the [open issues](https://github.com/othneildrew/Best-README-Template/issues) for a list of proposed features (and known issues).

-->

<!-- CONTRIBUTING
## Contributing

Contributions are what make the open source community such an amazing place to learn, inspire, and create. Any contributions you make are **greatly appreciated**.

1. Fork the Project
2. Create your Feature Branch (`git checkout -b feature/AmazingFeature`)
3. Commit your Changes (`git commit -m 'Add some AmazingFeature'`)
4. Push to the Branch (`git push origin feature/AmazingFeature`)
5. Open a Pull Request

-->

<!-- LICENSE -->

## License

This project has not a license.
All rights are reserved and it is not Open Source or free. You cannot modify or redistribute this code without explicit permission from the copyright holder, because projects which I realised are private conception from PJATK studies.
See `LICENSE` for more information.

<!-- CONTACT -->

## Contact

Dominik Stec - dccstcc@gmail.com

[![LinkedIn][linkedin-shield]][linkedin-url]

Project URL:
<br />
`https://github.com/dominik-stec/Electronics.git`

<!-- ACKNOWLEDGEMENTS
## Acknowledgements
* [GitHub Emoji Cheat Sheet](https://www.webpagefx.com/tools/emoji-cheat-sheet)
* [Img Shields](https://shields.io)
* [Choose an Open Source License](https://choosealicense.com)
* [GitHub Pages](https://pages.github.com)
* [Animate.css](https://daneden.github.io/animate.css)
* [Loaders.css](https://connoratherton.com/loaders)
* [Slick Carousel](https://kenwheeler.github.io/slick)
* [Smooth Scroll](https://github.com/cferdinandi/smooth-scroll)
* [Sticky Kit](http://leafo.net/sticky-kit)
* [JVectorMap](http://jvectormap.com)
* [Font Awesome](https://fontawesome.com)

-->

<!-- MARKDOWN LINKS & IMAGES -->
<!-- https://www.markdownguide.org/basic-syntax/#reference-style-links -->

[contributors-shield]: https://img.shields.io/github/contributors/dominik-stec/Electronics_PJA.svg?style=for-the-badge
[contributors-url]: https://github.com/dominik-stec/Electronics_PJA/graphs/contributors
[forks-shield]: https://img.shields.io/github/forks/dominik-stec/Electronics_PJA.svg?style=for-the-badge
[forks-url]: https://github.com/dominik-stec/Electronics_PJA/network/members
[stars-shield]: https://img.shields.io/github/stars/dominik-stec/Electronics_PJA.svg?style=for-the-badge
[stars-url]: https://github.com/dominik-stec/Electronics_PJA/stargazers
[issues-shield]: https://img.shields.io/github/issues/dominik-stec/Electronics_PJA.svg?style=for-the-badge
[issues-url]: https://github.com/dominik-stec/Electronics_PJA/issues
[license-shield]: https://img.shields.io/badge/License-NONE-orange
[license-url]: https://github.com/dominik-stec/ELK_PJATK/blob/master/LICENSE.md
[linkedin-shield]: https://img.shields.io/badge/-LinkedIn-black.svg?style=for-the-badge&logo=linkedin&colorB=555
[linkedin-url]: https://www.linkedin.com/in/dominik-stec
[product-screenshot]: images/screenshot.png
[arduino-shield]: https://img.shields.io/badge/-Arduino-green
[arduino-url]: https://www.arduino.cc/
[cpp-shield]: https://img.shields.io/badge/-C++-blue
[cpp-url]: https://isocpp.org/
