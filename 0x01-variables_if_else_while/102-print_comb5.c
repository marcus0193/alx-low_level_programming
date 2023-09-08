#include<stdio.h>
/*
 * main - All possible combinations of two two-digit numbers.
 *
 * Description: A C program that uses two while function to print
 *              combination of two two-digits numbers
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	int dig1 = 0, dig2;

	while (dig 1 <= 99)
	{
		dig2 = dig1;
		while (dig2 <= 99)
		{
			if (dig2 != dig1)
			{
				putchar((dig1 / 10) + 48);
				putchar((dig1 % 10) + 48);
				putchar(' ');
				putchar((dig2 / 10) + 48);
				putchar((dig2 % 10) + 48);

				if (dig1 != 98 ||  dig2 != 99)
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

