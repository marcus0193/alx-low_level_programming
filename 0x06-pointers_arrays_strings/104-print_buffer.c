#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * printable - is a function that determine the output
 *
 * @n: the function parameter
 *
 * Return: 1 if fits 0 if not
*/

int printable(int n)
{
	return (n >= 32 && n <= 126);
}

/**
 * hexprint - is the function to print the hex of the line
 *
 * @b: is the first parameter of the function
 *
 * @end: is the second parameter of the function
 *
 * @start: is the third parameter of the function
*/

void hexprint(char *b, int start, int end)
{
	int i = 0;

	while (i < 10)
	{
		if (i < end)
			printf("%02x", *(b + start + i));
		else
			printf("  ");
		if (i % 2)
			printf(" ");
		i++;
	}
}

/**
 * print - is a function to print ascii values to b
 *
 * @b: first parameter
 *
 * @start: second parameter
 *
 * @end: third parameter
*/

void print(char *b, int start, int end)
{
	int ch, i = 0;

	while (i < end)
	{
		ch = *(b + i + start);
		if (!printable(ch))
			ch = 46;
		printf("%c", ch);
		i++;

	}
}

/**
 * print_buffer - is a function that prints a buffer
 *
 * @b: is the first parameter of the function
 *
 * @size: is the second parameter of the function
*/

void print_buffer(char *b, int size)
{
	int start, end;

	if (size > 0)
	{
		for (start = 0; start < size; start += 10)
		{
			end = (size - start < 10) ? size - start : 10;
			printf("%08x: ", start);
			hexprint(b, start, end);
			print(b, start, end);
			printf("\n");
		}
	} else
		printf("\n");
}
