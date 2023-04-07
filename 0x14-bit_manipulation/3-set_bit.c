#include "main.h"

/**
 * set_bit - a function that sets the value of a bit to 1 at given index
 * @n: The bit to be set
 * @index: is the index starting from 0 of the bite to be set
 *
 * Return: 1 success or -1 error occurred
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);
	*n ^= (1 << index);

	return (1);
}
