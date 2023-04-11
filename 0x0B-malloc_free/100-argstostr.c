#include "../0x0B-malloc_free/2-str_concat.c"
#include "main.h"
#include <stdlib.h>

/**
 * argstostr - concatenates all passed arguments.
 * @ac: number of arguments.
 * @av: array of arguments.
 * Return: pointer to the new string, or NULL if fails.
 */
char *argstostr(int ac, char **av)
{
	char *str;
	int i = 1;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (; i < ac; i++)
	{
		str = str_concat(str, av[i]);
		str = str_concat(str, "\n");
	}

	return (str);
}
