#include <stdio.h>

/*
 * main - prints the alphabet in lowercase then uppercase
 *
 * description: uses while loop to go through the alphabet
 *              and putchar to print the result.
 *
 * Return always 0 (Success)
*/

int main(void)
{
	char alp = 'a';
	char ALP = 'A';

	while (alp <= 'z')
	{
		putchar(alp);
		alp++;
	}

	while (ALP <= 'Z')
	{
		putchar(ALP);
		ALP++;
	}
	putchar('\n');

	return (0);
}
