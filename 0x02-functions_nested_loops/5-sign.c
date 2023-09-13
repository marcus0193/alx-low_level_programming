#include <stdio.h>
#include "main.h"

/**
 * print_sign - is a function to check number status
 *
 * @n: input prarmerter of the function
 *
 * Description: function that prints + if the number is greater than 0,
 *              and 0 if it's 0 and - if it's less than 0
 *
 * Return: 1 and -1 or 0
*/

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	else
	{
		_putchar(45);
		return (-1);
	}
}
