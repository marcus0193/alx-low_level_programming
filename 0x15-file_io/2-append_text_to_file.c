#include "main.h"

/**
 * _len - the length of the input
 *
 * @l: the parameter
 *
 * Return: number of bytes
 */
int _len(char *l)
{
	int x = 0;

	if (!l)
		return (0);

	while (*l++)
		x++;
	return (x);
}

/**
 * append_text_to_file - appends text at the end of a file.
 *
 * @filename: the name of the file to create
 * @text_content: the content of the file
 *
 *
 * Return: 1 or 0
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int ind;
	ssize_t b = 0, length = _len(text_content);

	if (!filename)
		return (-1);
	ind = open(filename, O_WRONLY | O_APPEND);
	if (ind == -1)
		return (-1);
	if (length)
		b = write(ind, text_content, length);
	close(ind);
	return (b == length ? 1 : -1);
}
