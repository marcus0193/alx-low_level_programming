#include "main.h"

/**
 * get_bit -   function that returns the value of a bit at a given index.
 *
 * @n: the index number
 * @index: the bit to be returned
 *
 * Return: the bit or -1 if none
 */
 int get_bit(unsigned long int n, unsigned int index)
 {
        if (index >= sizeof(n) * 8)
                return (-1);

    return (n >> index & 1);
 }