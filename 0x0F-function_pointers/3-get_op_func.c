#include "3-calc.h"

/**
 * get_op_func - func to get the operator function.
 * @s: pointer to a string.
 * Return: pointer to func that corresponds to the opr given as a parameter.
 */
int (*get_op_func(char *s))(int, int)
{
	int i=0;
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};

	while (ops[i].op)
		if (strcmp(ops[i].op, s) == 0)
			return (ops[i++].f);

	return (NULL);
}
