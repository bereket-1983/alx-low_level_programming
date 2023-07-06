#include "main.h"

/**
 * clear_bit - a function that sets a value of bit
 * at a given index to 0
 * @n: a pointer to bit
 * @index: index set the value at indices start at 0
 *
 * Return: error -1
 * otherwise - 1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	*n &= ~(1 << index);

	return (1);
}
