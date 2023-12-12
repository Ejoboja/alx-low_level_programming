0x18. C - Dynamic libraries
Overview
This project involves creating a dynamic library named libdynamic.so. The library contains various C functions, and a script, 1-create_dynamic_lib.sh, generates the library liball.so from the C files in the current directory.

Tasks:
Mandatory:

Create libdynamic.so containing specified functions.
Provide a script 1-create_dynamic_lib.sh to generate liball.so from existing C files.
Advanced:

Create a dynamic library with C functions callable from Python (100-operations.so).
Demonstrated by the Python script 100-tests.py.
Advanced:

Utilize LD_PRELOAD to manipulate a Giga Millions program without directly modifying it.
A shell script 101-make_me_win.sh is provided for this task.
Repository Structure

Files:
libdynamic.so
liball.so
main.h
100-operations.so
101-make_me_win.sh

In conclusion, this repository focuses on dynamic library creation in C, offering tools to generate and utilize dynamic libraries efficiently. From building libraries to interfacing with Python and leveraging advanced techniques like code injection, these tasks showcase diverse functionalities and demonstrate the power and versatility of dynamic libraries in C programming. Explore the provided scripts and libraries to understand their implementation and maximize their potential in your projects.
