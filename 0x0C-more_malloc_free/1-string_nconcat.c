#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings up to n bytes of s2.
 * @s1: first string.
 * @s2: second string.
 * @n: number of bytes of s2 to concatenate.
 * Return: pointer to the concatenated string, OR NULL if failed.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s2_slice = NULL;
	unsigned int len_s2 = 0;

	if (s2)
		len_s2 = _strlen(s2);

	if (n >= len_s2)
		return (str_concat(s1, s2));

	s2_slice = malloc(sizeof(char) * (n + 1));
	if (s2_slice == NULL)
		return (NULL);

	_strncpy(s2_slice, s2, n);

	return (str_concat(s1, s2_slice));
}
