#include <stdio.h>

/**
 * main - All combinations of single-digit numbers
 *
 * Description: A c program that print combinations of single-digit numbers
 *              using putchar call only
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	int sd = 0;

	while (sd <= 9)
	{
		putchar(sd + 48);

		if (sd != 9)
		{
			putchar(',');
			putchar(' ');

		}

		sd++;
	}
	putchar('\n');

	return (0);
}
