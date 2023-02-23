#include "main.h"
/**
 * _isupper - Check if the given number is an uppercase letter
 * @c: Character to be tested
 *
 * Return: 1 if uppercase else 0 (false)
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	return (0);
}
