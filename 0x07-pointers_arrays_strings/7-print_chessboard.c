#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * print_chessboard - is a function that print chessboard
 *
 * @a: is the first parameter
*/

void print_chessboard(char (*a)[8])
{
	int locate, roc;

	for (locate = 0; locate < 8; locate++)
	{
		for (roc = 0; roc < 8; roc++)
		{
			_putchar(a[locate][roc]);
		}
	}
	_putchar('\n');
}
