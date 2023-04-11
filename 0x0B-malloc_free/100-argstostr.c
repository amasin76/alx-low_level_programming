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
	char *str = NULL;
	int i, j, len = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
		for (j = 0; av[i][j]; j++)
			len++;

	/* for newline characters will added to the final string */
	len += ac;

	str = malloc(sizeof(char) * len);
	if (str == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		str = str_concat(str, av[i]);
		str = str_concat(str, "\n");
	}

	return (str);
}
