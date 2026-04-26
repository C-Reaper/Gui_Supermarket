# Project README

## Overview
- The project is a simple GUI application for a supermarket checkout system. It uses a library to handle barcode scanning and rendering. The application can be built and run on Linux, Windows, and WebAssembly platforms.

## Features
- Barcode scanning and analysis.
- Rendering of the checkout interface in a window.
- Support for different operating systems: Linux, Windows, and WebAssembly.

## Project Structure
### Prerequisites
- C/C++ Compiler and Debugger (GCC)
- Make utility
- Standard development tools

## Build & Run
### Linux
To build and run on Linux:
```sh
cd <Project>
make -f Makefile.linux all
make -f Makefile.linux exe
```

### Windows
To build and run on Windows:
```sh
cd <Project>
make -f Makefile.windows all
make -f Makefile.windows exe
```

### WebAssembly (Emscripten)
To build and run on WebAssembly:
```sh
cd <Project>
make -f Makefile.web all
make -f Makefile.web exe
```

These commands will compile the project, clean any previous builds, and execute the resulting executable.