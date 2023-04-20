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
	va_list args;
	char *s_val = NULL;
	char c_val;
	int i_val, i = 0;
	float f_val;

	va_start(args, format);

	while (format && format[i])
	{
		switch (format[i])
		{
		case 'c':
			c_val = va_arg(args, int);
			printf("%c", c_val);
			break;
		case 'i':
			i_val = va_arg(args, int);
			printf("%d", i_val);
			break;
		case 'f':
			f_val = va_arg(args, double);
			printf("%f", f_val);
			break;
		case 's':
			s_val = va_arg(args, char *);
			if (!s_val)
				printf("(nil)");
			else
				printf("%s", s_val);
			break;
		default:
			break;
		}
		if (format[i - 1] && format[i + 1])
			printf(", ");
		i++;
	}
	putchar('\n');
	va_end(args);
}
