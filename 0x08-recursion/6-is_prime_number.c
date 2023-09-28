#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * it_prime - is a function that check if a x is a prime number
 *
 *  @x: the first parameter of the function
 *
 * @y: the second parameter of the function
 *
 * Return: ethier 1 if it's a prime or 0 if it's not
*/
int it_prime(int x, int y)
{
    if (y >= x && x >= 2)
        return (1);

    else if (x % y == 0 || x <= 1)
        return (0);

    else
        return (it_prime(x, y + 1)); 
}

/**
 * is_prime_number - a function that returns 1 if the input
 *                   integer is a prime number, otherwise return 0
 * 
 * @n: is the function parameter
 * 
 * Return: ethier 1 if it's a prime or 0 if it's not
*/

int is_prime_number(int n)
{
    return (it_prime(n, 2));
}