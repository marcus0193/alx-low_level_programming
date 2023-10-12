#include "3-calc.h"

/**
 * get_op_func - contain the function that selects function to perform
 *
 * @s: first parameter
 *
 * Return: function pinter
*/

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
		};
		int i = 0;

		while (i < 5)
		{
			if (ops[i].op[0] == *s && strlen(s) == 1)
			{
				return (ops[i].f);
			}
			i++;
		}

		return (NULL);
}
