#include <stdio.h>
#include "main.h"

/**
 * main - Starting point
 *
 * Description: A program that prints _putchar, followed by a new line
 *              using _putchar prototype
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	char str[] = "_putchar";
	int i;

	for (i = 0; i < 8; i++)
		_putchar(str[i]);
	_putchar('\n');

	return (0);
}
