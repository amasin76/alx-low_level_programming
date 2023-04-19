#include "3-calc.h"

/**
 * get_op_func - func to get the operator function.
 * @s: pointer to a string.
 * Return: pointer to func that corresponds to the opr given as a parameter.
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
	int i=0;

	switch (s[0])
    {
        case '+':
            return (ops[0].f);
        case '-':
            return (ops[1].f);
        case '*':
            return (ops[2].f);
        case '/':
            return (ops[3].f);
        case '%':
            return (ops[4].f);
        default:
            return (NULL);
    }
}
