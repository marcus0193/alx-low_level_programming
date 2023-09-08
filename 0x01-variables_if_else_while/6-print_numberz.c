#include <stdio.h>

/**
 * main - Printing single digits using putchar only
 *
 * Description: A c program that prints all single digits from
 *              base 10 starting from 0
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	int f = 0;

	while (f <= 9)
	{
		putchar(f + '0');
		f++;
	}
	putchar('\n');

	return (0);
}
