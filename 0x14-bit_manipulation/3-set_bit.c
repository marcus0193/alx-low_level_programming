#include "main.h"

/**
 * set_bit - function that sets the value of a bit to 1 at a given index.
 *
 * @n: the index number
 * @index: the new bit
 *
 * Return: 1 or -1
 */

 int set_bit(unsigned long int *n, unsigned int index)
 {
        if (index >= sizeof(n) * 8)
                return (-1);

    return (ii(*n |= 1l << index));
 }