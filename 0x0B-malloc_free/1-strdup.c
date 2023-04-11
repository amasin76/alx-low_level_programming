#include "main.h"
#include <stdlib.h>

/**
 * _strdup - Duplicates a string
 * @str: The string to duplicate
 * Return: Pointer to the duplicated string
 */
char *_strdup(char *str)
{
	unsigned int i = 0, size = sizeof(*str);
	char *new_str = malloc(size);

	if (!*str)
		return (NULL);

	for (; str[i]; i++)
		new_str[i] = str[i];

	return (new_str);
}
