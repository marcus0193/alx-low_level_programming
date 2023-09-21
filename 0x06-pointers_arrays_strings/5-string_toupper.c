#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * *string_toupper - is a function that changes all lowercase to uppercase
 *
 * @str: is the first parameter of the function
 *
 * Return: is new array
*/

char *string_toupper(char *str)
{
	int lower;

	for (lower = 0; str[lower] != '\0'; lower++)
	{
		if (str[lower] >= 97 && str[lower] <= 122)
		{
			str[lower] = str[lower] - 32;
		}
	}
	retuen (str);
}
