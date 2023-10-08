#include "main.h"

/**
 * **alloc_grid - function that returns a pointer to a
 *                2 dimensional array of integers
 *
 * @width: is the first parameter
 *
 * @height: is the second parameter of the function
 *
 * Return: null or a pointer
*/

int **alloc_grid(int width, int height)
{
	int **dime, n, y;

	dime = malloc(sizeof(*dime) * height);

	if (width <= 0 || height <= 0 || dime == 0)
	{
		return (NULL);
	}
	else
	{
		for (n = 0; n < height; n++)
		{
			dime[n] = malloc(sizeof(**dime) * width);
			if (dime[n] == 0)
			{
				while (n--)
					free(dime[n]);
				free(dime);
				return (NULL);
			}

			for (y = 0; y < width; y++)
				dime[n][y] = 0;
		}
	}
	return (dime);
}
