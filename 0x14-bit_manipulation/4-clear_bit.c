#include "main.h"
/**
* clear_bit - Sets the value of a bit to 0 at a given index
* @n: A pointer to the unsigned long integer to modify
* @index: The index of the bit to set to 0, starting from 0
*
* Description: This function clears (sets to 0) the bit at the specified index
* in the given unsigned long integer. It checks for valid index values.
*
* Return: 1 if it worked, or -1 if an error occurred.
*/
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
	return (-1);

	*n &= ~(1UL << index);
	return (1);
}
