#include "main.h"

/**
 * creat_file - a function that creat a file
 * @filename: the file to creat
 * @text_content: a pointer to string to write to the file
 *
 * Return: on success 1, on failure -1
 * if filename is NULL -1
 * if text_content is NULL creat an empty fiel
 */

int create_file(const char *filename, char *text_content)
{
	int o, w, len = 0;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	o = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	w = write(o, text_content, len);

	if (o == -1 || w == -1)
		return (-1);

	close(o);

	return (1);
}
