# suckless

Hos's build of suckless tools

This repo contains builds of:

- [dmenu](dmenu/README.md)
- [dwm](dwm/README.md)
- [farbfeld](farbfeld/README.md)
- [sent](sent/README.md)
- [slock](slock/README.md)
- [slstatus](slstatus/README.md)
- [st](st/README.md)
- [tabbed](tabbed/README.md)

# Requirements

To compile suckless tools, you need a C compiler and **GNU Make**:

- gcc
- make

Then you need `pkg-config` to call some libraries.
If you didn't applied any patches (which I have done many)
I believe you don't need this one (still not sure).

Most of the suckless tools needs `X11` and `xft` header files:

- libX11-dev
- libxft-dev

And some others needs different libs due to their nature
and some of patches that I've applied:

### dmenu

- libXinerama-dev
- fribidi-dev

### dwm

- libXinerama-dev
- fribidi-dev

### st

- harfbuzz-dev

### slock

- libXrandr-dev

### farbfeld

- libjpeg-turbo-dev
- libpng-dev
