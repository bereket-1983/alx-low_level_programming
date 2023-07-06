#include "main.h"

/**
 * flip_bits - a function that bits needed to be flipped
 * to get from one number to another
 * @n: number
 * @m: number to flip to n
 *
 * Return: number of bits to flip to get from n to m
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor = n ^ m, bit = 0;

	while (xor > 0)
	{
		bits += (xor & 1);
		xor >>= 1;
	}

	return (bits);
}
