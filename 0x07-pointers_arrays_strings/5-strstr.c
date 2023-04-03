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
	for (; *haystack; haystack++)
		if ((*haystack == *needle) && compare(haystack, needle))
			return (haystack);

	return (NULL);
}

/**
 * compare - self explain
 * @haystack: first string
 * @needle: second string
 * Return: true if `X` and `Y` are the same
 */
int compare(const char *haystack, const char *needle)
{
	for (; *haystack && *needle; haystack++, needle++)
		if (*haystack == *needle)
			return (1);

	return (*needle == '\0');
}
