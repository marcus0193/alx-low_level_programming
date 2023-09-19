#include <stdio.h>
#include "main.h"

/**
 * _atoi - is a function that convert a string to an integer.
 *
 * @s: is the parameter of the function.
 *
 * Return: the string converted into integers.
*/

int _atoi(char *s)
{
	unsigned int n = 0;
	int y = 1;

	do {
		if (s == '-')
			y *= -1;
		else if (s >= '0' && s <= '9')
			n = (n * 10) + (s - '0');
		else if (n > 0)
			break;
	} while (s++);

	return (n * y);
}
