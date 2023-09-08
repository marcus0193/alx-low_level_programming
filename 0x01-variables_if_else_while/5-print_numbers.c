#include<stdio.h>

/*
 * main - Printing single digits
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
		printf("%i", f);
		f++;
	}
	printf("\n");

	return (0);
}
