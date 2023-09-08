#include<stdio.h>

/**
 * main: A C program that print out the size of all data types
 *
 * Description: using sizeof func to print sizes
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	printf("Size of a char: %u byte(s)\n", sizeof(char));
	printf("Size of an int: %u bytes\n", sizeof(int));
  	printf("Size of a long int: %u bytes\n", sizeof(long int));
    	printf("Size of a long long int: %u byte\n", sizeof(long long int));
    	printf("size of a float: %u byte(s)\n", sizeof(float));
    	return (0);
}
