#include <stdio.h>
#include "main.h"

/**
 * *_strcpy - is a function that copies the string pointed to by src,
 * including the terminating null byte (\0), to the buffer pointed to by dest.
 *
 * @dest: is the first parameter of the function
 *
 * @src: is the second parameter of the function
*/

char *_strcpy(char *dest, char *src)
{
	int i = -1;

	do {
		i++;
		dest[i] = src[i];
	} while (src[i] != '\0');

	return (dest);
}
