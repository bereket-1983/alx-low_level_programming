#include<stdio.h>
#include<unistd.h>

/**
* main - A c program that prints a line to the standard error
*
* Return: Always 1 (success)
*/
int main(void)
{
	write(stdout, "and that piece of art is useful\" - Dora korpar, 2015-10-19\n", 59);
return (1);
}
