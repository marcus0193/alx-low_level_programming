#include <stdio.h>
#include "main.h"

/**
 * _islower - is a function to check lowercase letter
 *
 * @c: input prarmerter of the function
 *
 * Description: function that prints 1 for lowercase character,
 *              and 0 otherwase
 *
 * Return: 1 or 0
*/

int _islower(int c)
{
	for (c >= 97 && c <= 122)
		return (1);
	return (0);
}
