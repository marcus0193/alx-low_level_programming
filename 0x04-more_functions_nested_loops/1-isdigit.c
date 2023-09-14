#include <stdio.h>
#include "main.h"

/**
 * _isdigit - function that checks if c is digit from 0 - 9
 *
 * @c: input parameter of the function
 *
 * Return: 1 if digit 0 if not
*/

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
