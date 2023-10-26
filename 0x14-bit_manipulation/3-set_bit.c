#include "main.h"

/**
* set_bit - Sets the value of a bit to 1 at a given index
* @n: A pointer to the unsigned long integer to modify
* @index: The index of the bit to set to 1, starting from 0
*
* Description: This function sets the bit at the specified index to 1
* in the given unsigned long integer. It checks for valid index values.
*
* Return: 1 if it worked, or -1 if an error occurred.
*/
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
	return (-1);

	*n |= (1UL << index);
	return (1);
}
