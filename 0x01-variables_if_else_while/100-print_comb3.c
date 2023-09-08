#include <stdio.h>


/**
 * main - All possible different combinations of two digits
 *
 * Description: A C program that uses two while function to print
 *              combination of two digits numbers
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	int dig1 = 0;

	while (dig1 <= 9)
	{
		int dig2 = 0;

		while (dig2 <= 9)
		{
			if (dig1 != dig2 && dig1 < dig2)
			{
				putchar(dig1 + 48);
				putchar(dig2 + 48);

				if (dig1 + dig2 != 17)
				{
					putchar(',');
					putchar(' ');
				}
			}
			dig2++;
		}
		dig1++;
	}
	putchar('\n');

	return (0);
}

