#include <stdio.h>


/**
 * main - All possible different combinations of three digits
 *
 * Description: A C program that uses three while function to print
 *              combination of three digits numbers
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
			int dig3 = 0;

			while (dig3 <= 9)
			{
				if (dig1 != dig2 && dig1 < dig2 && dig2 != dig3 && dig2 < dig3)
				{
					putchar(dig1 + 48);
					putchar(dig2 + 48);
					putchar(dig3 + 48);

					if (dig1 + dig2 + dig3 != 24)
					{
						putchar(',');
						putchar(' ');
					}
				}
				dig3++;
			}
			dig2++;
		}
		dig1++;
	}
	putchar('\n');

	return (0);
}

