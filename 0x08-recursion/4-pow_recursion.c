#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * _pow_recursion - is a  function that returns the value of x
 *                  raised to the power of y
 *
 * @x: is the first parameter of the function
 *
 * @y: is the second parameter of the function
 *
 * Return: the result of x power y or -1 if y is less than 0 and 1 if 0  
*/

int _pow_recursion(int x, int y)
{
    if (y < 0)
        return (-1);
    else if (y == 1)
        return (x);
    else if (y == 0)
        return (1);

return (x * _pow_recursion(x, y - 1));
}