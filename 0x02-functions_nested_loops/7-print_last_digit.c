#include <stdio.h>
#include "main.h"

/**
 * print_last_digit - is a function to print the last digit of number
 *
 * @n: input prarmerter of the function
 *
 * Description: function that prints the last digit of a number,
 *              Returns the value of the last digit
 *
 * Return: 1 and -1 or 0
*/

int print_last_digit(int n)
{
	int ld;

	if (n < 0)
		ld = -1 * (n % 10);
	else
		ld = n % 10;

	_putchar(ld + '0');
	return (ld);
}
