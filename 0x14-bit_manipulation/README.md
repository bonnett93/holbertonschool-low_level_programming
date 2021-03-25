# 0x14. C - Bit manipulation

This directory contains the task answer for the proyect "0x14. C - Bit manipulation", part of Holberton School program.

### Files

- holberton.h

This file is the header that contains all prototypes of functions bellow.


- 0-binary_to_uint.c

	This file contains the function that converts a binary number to an unsigned int.

		Prototype: unsigned int binary_to_uint(const char *b);
		Return: The converted number,
			or 0 if b = NULL
			or there is one or more chars in the string b that is not 0 or 1


- 1-print_binary.c

	This file contains the function that prints the binary representation of a number.

		Prototype: void print_binary(unsigned long int n);


- 2-get_bit.c

	This file contains function that returns the value of a bit at a given index.

		Prototype: int get_bit(unsigned long int n, unsigned int index);

		Returns: the value of the bit at index index or -1 if an error occured.


- 3-set_bit.c

	This file contains the function that sets the value of a bit to 1 at a given index.

		Prototype: int set_bit(unsigned long int *n, unsigned int index);

		Returns: 1 if it worked, or -1 if an error occurred.


- 4-clear_bit.c

	This file contains the function that sets the value of a bit to 0 at a given index.

		Prototype: int clear_bit(unsigned long int *n, unsigned int index);

		Returns: 1 if it worked, or -1 if an error occurred


- 5-flip_bits.c

	This file contains the function that returns the number of bits you would need to flip to get from one number to another.

		Prototype: unsigned int flip_bits(unsigned long int n, unsigned long int m);
