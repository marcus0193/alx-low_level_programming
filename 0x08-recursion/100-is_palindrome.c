#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * declare_final - is a function that find the length of the string to declare it's final alpha
 * 
 * @s: is the function parameter
 * 
 * Return: the length of the string
*/

int declare_final(char *y)
{
	int x = 0;

	if (*y > '\0')
		x += declare_final(y + 1) + 1;

	return (x);
}

/**
 * detect - is a function that detects  wither the string is palindrome
 * 
 * @s: is the first parameter of the function
 *
 * @first: is the second parameter of the function
 *
 * @last: is the third parameter of the function
 *
 * @length: is the last parameter of the function
 * 
 * Return: ethier 1 or 0
*/

int detect(char *s, int first, int last, int length)
{
	if ((first == last && length != 0) || (first == last + 1 && length == 0))
		return (1);
	else if (s[first] != s[last])
		return (0);
	else
		return (detect(s, first + 1, last - 1, length));
}

/**
 * is_palindrome - is a function that returns 1 if a string is a palindrome and 0 if not
 *
 *  @s: is the function parameter
 *
 * Return: 1 if it's palindrome and 0 if not
 *
 * 
*/
int is_palindrome(char *s)
{
	int last = declare_final(s);

	return (detect(s, 0, last - 1, last % 2));
}
