#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_all - prints all arguments passed to it
 * @format: a string containing the types of arguments passed
 *
 * This function takes a format string and a variable number of arguments.
 * The format string contains characters that indicate the type of argument
 * that is expected. The following characters are supported:
 *  'c' for char
 *  'i' for int
 *  'f' for float
 *  's' for string
 *
 * If the character is not one of these, it is ignored.
 * If the argument is a string, it will be printed as-is.
 * If the argument is NULL, "(nil)" will be printed instead.
 */
void print_all(const char *const format, ...)
{
	int i = 0;
	char *str = NULL, *sep = "";

	va_list args;

	va_start(args, format);

	while (format && format[i])
	{
		switch (format[i])
		{
		case 'c':
			printf("%s%c", sep, va_arg(args, int));
			break;
		case 'i':
			printf("%s%d", sep, va_arg(args, int));
			break;
		case 'f':
			printf("%s%f", sep, va_arg(args, double));
			break;
		case 's':
			str = va_arg(args, char *);
			if (!str)
				str = "(nil)";
			printf("%s%s", sep, str);
			break;
		default:
			i++;
			continue;
		}
		sep = ", ";
		i++;
	}

	printf("\n");
	va_end(args);
}
