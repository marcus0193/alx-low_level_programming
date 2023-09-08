#include <stdio.h>

/*
 * main - prints the alphabet in lowercase in reverse
 *
 * Description: uses while loop to go through the alphabet
 *              and putchar to print the result.
 *
 * Return always 0 (Success)
*/

int main(void)
{
	char alp = 'z';

	while (alp >= 'a')
	{
		putchar(alp);
		alp--;
	}
	putchar('\n');

	return (0);
}
