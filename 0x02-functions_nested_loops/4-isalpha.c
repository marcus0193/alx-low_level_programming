#include <stdio.h>
#include "main.h"

/**
 * _isalpha - is a function to check alpha characters
 *
 * @c: input prarmerter of the function
 *
 * Description: function that prints 1 for alpha character,
 *              and 0 otherwase
 *
 * Return: 1 or 0
*/

int _isalpha(int c)
{
	for (c >= 97 && c <= 122)
		return (1);
	for (c >= 65 && c <= 90)
		return (1);
	return (0);
}
