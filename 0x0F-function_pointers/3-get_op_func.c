#include "3-calc.h"

/**
 * get_op_func - func to get the operator function.
 * @s: pointer to a string.
 * Return: pointer to func that corresponds to the opr given as a parameter.
 */
int (*get_op_func(char *s))(int, int)
{
	int i=0;
	op_t oprs[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};

	for (;oprs[i].op;i++)
		if (strcmp(oprs[i].op, s) == 0)
			return (oprs[i].f);

	return (NULL);
}
