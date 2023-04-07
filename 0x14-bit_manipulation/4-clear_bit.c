#include "main.h"

/**
 * clear_bit - a function that sets the value of a bit to 0 at given index
 * @n: The pointer to the bit
 * @index: starting from 0 of the bit you want to set or clear
 *
 * Return: 1 success or -1 error
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);
	*n &= ~(1 << index);
	return (1);
}
