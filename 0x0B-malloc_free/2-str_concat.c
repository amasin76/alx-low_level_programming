#include "../0x05-pointers_arrays_strings/2-strlen.c"
#include "../0x07-pointers_arrays_strings/1-memcpy.c"
#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: first string to be concatenated
 * @s2: second string to be concatenated
 * Return: pointer to the new string, or NULL if fails
 */
char *str_concat(char *s1, char *s2)
{
	char *new_str;
	int len_s1 = 0, len_s2 = 0;

	(s1 == NULL) && (s1 = "");
	(s2 == NULL) && (s2 = "");

	len_s1 = _strlen(s1);
	len_s2 = _strlen(s2);

	new_str = malloc(sizeof(char) * (len_s1 + len_s2 + 1));

	if (new_str == NULL)
		return (NULL);

	_memcpy(new_str, s1, len_s1);
	_memcpy(new_str + len_s1, s2, len_s2 + 1);

	return (new_str);
}
