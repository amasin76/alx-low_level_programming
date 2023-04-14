#include "main.h"
#include <stdlib.h>

/**
 * main - entry point
 * @argc: The number of command-line arguments
 * @argv: the array of arguments
 * Return: 0 on success, 98 on failure
 */
int main(int argc, char *argv[])
{
	char *s1, *s2;
	int *result = NULL;
	int i, len1 = 0, len2 = 0, checker = 0;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}
	if (!(is_number(argv[1]) && is_number(argv[2])))
	{
		printf("Error\n");
		exit(98);
	}

	s1 = argv[1];
	s2 = argv[2];
	len1 = str_len(s1);
	len2 = str_len(s2);

	/* in progress */

	return (0);
}
