#include "main.h"

/**
 * set_bit - a function that sets a value of a bit at a
 * given index to 1
 * @n: a pointer to bit
 * @index: a index to set value start 0
 *
 * Return: error -1
 * otherwise - 1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	*n ^= (1 << index);

	return (1);
}
