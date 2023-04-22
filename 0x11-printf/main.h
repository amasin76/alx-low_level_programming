#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * struct fmt - Struct for formatting data.
 * @sym: *sym: Pointer to a character string.
 * @fn: func pointer to a function that takes a va_list as an arg.
 */
typedef struct fmt
{
	char *sym;
	int (*fn)(va_list);
} fmt_t;

/* main */
int _printf(const char *format, ...);

/* print handler */
int (*get_print(const char *format))(va_list);

/* print_chars */
int print_char(va_list list);
int print_str(va_list list);
int print_perc(va_list list);

/* print_numbers */
int print_int(va_list list);

/* utilities */
unsigned int _strlen(char *s);
void reverse_str(char s[]);
void _itoa(long n, char s[]);

/* writes */
int _putchar(char c);
int _puts(char *str);

#endif
