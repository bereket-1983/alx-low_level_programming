#include "main.h"

/**
 * flip_bits - a function that returns the number of bits to flip
 * @n: The number bit
 * @m: The number to flip to n
 *
 * Return: The fliped number
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor = n ^ m, bits = 0;

	while (xor > 0)
	{
		bits += (xor & 1);
		xor >>= 1;
	}
	return (bits);
}
