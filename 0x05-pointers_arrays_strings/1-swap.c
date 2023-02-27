#include "main.h"
/**
 * swap_int - reset a int value to 98
 * @a: an input integer pointer
 * @b: an input integer pointer
 * Return: Nothing
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;

	*a = *b;
	*b = temp;
}
