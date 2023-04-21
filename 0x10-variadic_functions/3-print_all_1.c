#include "variadic_functions.h"
#include <stdio.h>
#include <string.h>

/**
 * print_all - prints anything
 * @format: list of types of arguments
 *
 * Return: void
 */

void print_all(const char *const format, ...)
{
	va_list args;
	size_t i = 0, n = strlen(format);
	char *s;

	va_start(args, format);
	while (format && format[i])
	{
		switch (format[i])
		{
		case 'c':
			printf("%c", va_arg(args, int));
			print_sep(i, n);
			break;
		case 'i':
			printf("%i", va_arg(args, int));
			print_sep(i, n);
			break;
		case 'f':
			printf("%f", va_arg(args, double));
			print_sep(i, n);
			break;
		case 's':
			s = va_arg(args, char *);
			print_str(s);
			print_sep(i, n);
			break;
		}
		i++;
	}
	va_end(args);
	printf("\n");
}

/**
 * print_sep - prints separator if needed
 * @i: current index
 * @n: length
 *
 * Return: void
 */

void print_sep(size_t i, size_t n)
{
	if (i < (n - 1))
		printf(", ");
}

/**
 * print_str - prints the right string
 * @s: pointer to string
 *
 * Return: void
 */

void print_str(char *s)
{
	if (s == NULL)
	{
		printf("(nil)");
		return;
	}

	printf("%s", s);
}
