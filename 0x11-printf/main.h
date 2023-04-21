#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * fmt_t - Struct for formatting data.
 * @sym: *sym: Pointer to a character string.
 * @fn: func pointer to a function that takes a va_list as an arg.
 */
typedef struct fmt
{
	char *sym;
	int (*fn)(va_list);
} fmt_t;

int _printf(const char *format, ...);
int _putchar(char c);
int print_char(va_list list);
int print_str(va_list list);
int print_perc(va_list list);
int (*get_print(const char *format))(va_list);

#endif
