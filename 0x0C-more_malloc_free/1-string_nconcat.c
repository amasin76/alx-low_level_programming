#include "main.h"
#include <stdlib.h>

int _strlen(char *s);
char *_strncpy(char *dest, char *src, unsigned int n);
char *str_concat(char *s1, char *s2);

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

/**
 * _strlen - length of a given string
 * @s: the string
 * Return: the length of given string
 */
int _strlen(char *s)
{
	int len = 0;

	while (s[len])
		len++;

	return (len);
}

/**
 * _strncpy - copies n bytes from src to dest
 * @dest: the destination string
 * @src: the source string
 * @n: the number of bytes
 * Return: dest
 */
char *_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (src[i])
		dest[i++] = src[n++];

	return (dest);
}

/**
 * str_concat - concatenates two strings
 * @s1: first string to be concatenated
 * @s2: second string to be concatenated
 * Return: pointer to the new string, or NULL if fails
 */
char *str_concat(char *s1, char *s2)
{
	char *new_str;
	int i = 0, j = 0, len_s1 = 0, len_s2 = 0;

	(s1 == NULL) && (s1 = "");
	(s2 == NULL) && (s2 = "");

	len_s1 = _strlen(s1);
	len_s2 = _strlen(s2);

	new_str = malloc(sizeof(char) * (len_s1 + len_s2 + 1));
	if (new_str == NULL)
		return (NULL);

	for (; i < len_s1; i++)
		new_str[i] = s1[i];
	for (; j < len_s2; j++, i++)
		new_str[i] = s2[j];

	new_str[i] = '\0';

	return (new_str);
}
