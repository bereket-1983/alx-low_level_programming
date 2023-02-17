#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main - Entry
 * Return: Always 0 (success)
 */

int main(void)
{
	int n;
	int a;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	a = n % 10;
	/* your code goes there */
	if (n > 5)
		printf("Last digit of %d is %d is greater than 5\n", n, a);
	else if (a == 0)
		printf("Last digit of %d is %d is 0\n", n, a);
	else
		printf("Last digit of %d is %d and less than 6 and not 0\n", n, a);
	return (0);
}
