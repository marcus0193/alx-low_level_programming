#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output.
 *
 * @filename: name of file
 * @letters: what to read in bytes
 *
 * Return: number of printed bytes
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int ditect;
	ssize_t b;
	char buffer[READ_BUF_SIZE * 8];

	if (!filename || !letters)
		return (0);
	ditect = open(filename, O_RDONLY);
	if (ditect == -1)
		return (0);
	b = read(ditect, &buffer[0], letters);
	b = write(STDOUT_FILENO, &buffer[0], b);
	close(ditect);
	return (b);
}
