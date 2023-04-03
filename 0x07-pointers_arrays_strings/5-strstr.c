#include "main.h"
#include <stddef.h>

int compare(const char *X, const char *Y);

/**
 * *_strstr - locates a substring
 * @haystack: string to search in
 * @needle: substring to look for
 * Return: pointer to the beginning of the located substring
 * or NULL if the substring is not found
 */
char *_strstr(char *haystack, char *needle)
{
	while (*haystack)
	{
		if (*haystack == *needle)
			return (haystack);

		haystack++;
	}

	return (NULL);
}

/**
 * compare - self explain
 * @X: first string
 * @Y: second string
 * Return: true if `X` and `Y` are the same
 */
int compare(const char *X, const char *Y)
{
	for (; *X && *Y; X++, Y++)
		if (*X != *Y)
			return (0);

	return (*Y == '\0');
}
