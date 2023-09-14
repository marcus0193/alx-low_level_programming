#include <stdio.h>
#include "main.h"

/**
 * print_numbers - print numbers 0 -9 as chars followed by new line
 *
 * Description: using _putchar only twice
 *
 * Return: Always 0
*/

void print_numbers(void)
{
	int n = 0;

	do {
		_putchar(num + 48);
		num++;
	} while (num >= 0 && num <= 9);
	_putchar('\n');
}
