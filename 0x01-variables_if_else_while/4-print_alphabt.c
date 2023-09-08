#include <stdio.h>

/*
 * main - prints the alphabet in lowercase except the e and q
 *
 * Description: uses while loop to go through the alphabet
 *              and putchar to print the result.
 *
 * Return always 0 (Success)
*/

int main(void)
{
	char alp = 'a';

	while (alp <= 'z')
	{
		if (alp == e || alp == q)
			alp++;
		putchar(alp);
		alp++;
	}
	putchar('\n');

	return (0);
}
