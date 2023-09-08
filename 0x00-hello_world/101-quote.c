#include <unistd.h>

/**
 * main - wirte the sting of a quote in the standard error.
 *
 *Description: wirte func can replace the printf that way below
 *
 * Return: 1 if success
*/

int main(void)
{
	char cas[]  = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(1, cas, 59);
	return (1);
}
