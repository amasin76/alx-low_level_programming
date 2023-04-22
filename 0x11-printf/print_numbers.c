#include "main.h"

/**
 * print_int - prints integers from a va_list
 * @list: va_list of integers to be printed
 * Return: number of characters printed
 */
int print_int(va_list list)
{
	unsigned int i = 0;
	int num = va_arg(list, long);
	char buffer[50];

	_itoa(num, buffer);
	for (; buffer[i]; i++)
	{
		_putchar(buffer[i]);
	}

	return (i);
}
