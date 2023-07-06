#include "main.h"

/**
 * get_bit - a function that gets a bit value at a given index
 * @n: bit value
 * @index: index to get the value start at 0
 *
 * Return: error -1
 * otherwise - bit value at index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	if ((n & (1 << index)) == 0)
		return (0);

	return (1);
}
