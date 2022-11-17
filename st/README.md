# st - simple terminal

st is a simple terminal emulator for X which sucks less.


## Requirements

In order to build st you need the Xlib header files.


## Installation

Edit config.mk to match your local setup (st is installed into
the /usr/local namespace by default).

Afterwards enter the following command to build and install st (if
necessary as root):

    make clean install


## Running st

If you did not install st with make clean install, you must compile
the st terminfo entry with the following command:

    tic -sx st.info

See the man page for additional details.

## Credits

Based on Aurélien APTEL <aurelien dot aptel at gmail dot com> bt source code.


## Screenshot

- Colorscheme:

| 0. Dracula                                  | 1. Solarized-dark                                 |
|:-------------------------------------------:|:-------------------------------------------------:|
| ![0-Dracula](shots/0-Dracula.png)           | ![1-Solarized-dark](shots/1-Solarized-dark.png)   |

| 3. Gruvbox-dark                             | 4. Nord                                           |
|:-------------------------------------------:|:-------------------------------------------------:|
| ![3-Gruvbox-dark](shots/3-Gruvbox-dark.png) |  ![4-Gruvbox-dark](shots/4-Gruvbox-dark.png)      |

| 4. Ubuntu                                   | 5. Ayu-dark                                       |
|:-------------------------------------------:|:-------------------------------------------------:|
| ![4-Ubuntu](shots/4-Ubuntu.png)             | ![5-Ayu-dark](shots/5-Ayu-dark.png)               |

| 6. Hos                                      | 7. Termite                                        |
|:-------------------------------------------:|:-------------------------------------------------:|
| ![6-Hos](shots/6-Hos.png)                   | ![7-Termite](shots/7-Termite.png)                 |

| 8. 256_noir                                 | 9. Solarized-light                                |
|:-------------------------------------------:|:-------------------------------------------------:|
| ![8-256_noir](shots/8-256_noir.png)         | ![9-Solarized-light](shots/9-Solarized-light.png) |
