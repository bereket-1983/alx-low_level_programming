#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - a function that read a text file
 * and prints it to the POSIX stdout
 * @filename: file name to the pointer
 * @letters: a function read and print
 *
 * Return: if the file name is not opened or read - 0
 * if the file name is NULL - 0
 * othewise if write fails or does not write the
 * expected amount of bytes - 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t o, r, w;
	char *buf;

	if (filename == NULL)
		return (0);

	buf = malloc(sizeof(char) * letters);
	if (buf == NULL)
		return (0);

	o = open(filename, O_RDONLY);
	r = read(o, buf, letters);
	w = write(STDOUT_FILENO, buf, r);

	if (o == -1 || r == -1 || w != r)
	{
		free(buf);
		return (0);
	}

	free(buf);
	close(0);

	return (w);
}
