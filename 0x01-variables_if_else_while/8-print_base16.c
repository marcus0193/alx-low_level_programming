#include <stdio.h>

/**
 * main - prints all the numbers of base 16 in lowercase
 *
 * Description: A c program that prints all single digits from
 *              base 10 starting from 0 to f using putchar only
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	int x = 48;

	while (x <= 102)
	{
		putchar(x);

		if (x == 57)
		{
			x += 39;
		}
		x++;
	}
	putchar('\n');

	return (0);
}
