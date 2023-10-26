ReadMe - Bit Manipulation
This repository contains C programs that perform various bit manipulation tasks. Each task is described briefly below, along with the main files for each task. These programs have been designed to be concise and efficient for their respective functions.

Task 0 - binary_to_uint.c
This program converts a binary number represented as a string into an unsigned integer.

Prototype:

unsigned int binary_to_uint(const char *b);
Task 1 - print_binary.c
This program prints the binary representation of an unsigned long integer without using arrays, malloc, or % or / operators.

Prototype:

void print_binary(unsigned long int n);
Task 2 - get_bit.c
This program returns the value of a bit at a given index in an unsigned long integer.

Prototype:

int get_bit(unsigned long int n, unsigned int index);
Task 3 - set_bit.c
This program sets the value of a bit to 1 at a given index in an unsigned long integer.

Prototype:

int set_bit(unsigned long int *n, unsigned int index);
Task 4 - clear_bit.c
This program sets the value of a bit to 0 at a given index in an unsigned long integer.

Prototype:


int clear_bit(unsigned long int *n, unsigned int index);
Task 5 - flip_bits.c
This program calculates the number of bits that need to be flipped to change one unsigned long integer to another.

Prototype:

unsigned int flip_bits(unsigned long int n, unsigned long int m);
Task 6 - get_endianness.c
This program checks the endianness of the system and returns 0 for big-endian or 1 for little-endian.

Prototype:


int get_endianness(void);
Task 7 - Crackme3
This is an advanced task where you need to find a password for a program and save it in a file named "101-password." The exact password should be saved in the file, without any new lines or extra spaces.

To use the password:

shell

./crackme3 `cat 101-password`
Please note that each task is contained in its respective C file within the repository. You can compile these programs using a C compiler, such as gcc, to test their functionality.

This repository is part of the ALX Low-Level Programming curriculum.
