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
	char *buf;
	ssize_t fd;
	ssize_t w;
	ssize_t t;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	t = read(fd, buf, letters);
	w = write(STDOUT_FILENO, buf, t);

	free(buf);
	close(fd);
	return (w);
}
