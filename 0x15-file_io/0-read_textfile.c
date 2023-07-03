#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - read a text file and prints it to POSIX stdout
 * @filename: A pointer to the name of the file
 * @letters: The number of letters the function read and print
 *
 * Return: if the function fails or filename is NULL - 0
 * if write fails or does not write the expected amount bytes return 0
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t o;
	ssize_t r;
	ssize_t w;
	char *buf;

	if (filename == NULL)
		return (0);

	buf = malloc(sizeof(char) * letters);
	if (buf == NULL)
		return (0);
	o = open(filename, O_RDONLY);
	r = read(o, buf, letters);
	w = write(STDOUT_FILENO, buf, r);

	if (o == -1 || r == -1 || w == -1 || w != r)
	{
		free(buf);
		return (0);
	}

	free(buf);
	close(o);

	return (w);
}