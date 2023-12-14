#include "main.h"

/**
 * flip_bits - returns the number of bits you would need to flip
 *  to get from one number to another.
 *
 * @n: 1st
 * @m: 2nd
 *
 * Return: the fliped numbers
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
        unsigned long int flip = n ^ m;
        unsigned int track = 0;

        while (flip)
        {
                if (flip & 1ul)
                        track++;
                flip = flip >> 1;
        }
        return (track);
}
