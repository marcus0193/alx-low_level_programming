#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * set_string - is a function that sets the value of a pointer to a char
 *
 * @s: is the pointer of pointer
 *
 * @to: is the second parameter of the function
*/

void set_string(char **s, char *to)
{
	*s = to;
}
