#include "main.h"
#include <limits.h>

int print_integers_helper(int count, int value);

/**
 * print_integers - prints integers from a va_list
 * @list: va_list of integers to be printed
 * Return: number of characters printed
 */
int print_integers(va_list list)
{
	int count = 0;
	int value = va_arg(list, int);

	if (value < 0)
	{
		_putchar('-');
		if (value == INT_MIN)
		{
			count += print_integers_helper(count, -(value / 10));
			_putchar('0' + -(value % 10));
			count++;
			return (count);
		}
		else
		{
			value = -value;
		}
	}

	if (value >= 10)
	{
		count += print_integers_helper(count, value / 10);
	}

	_putchar('0' + (value % 10));
	count++;

	return (count);
}

/**
 * print_integers_helper - prints integers recursively.
 * @count: number of digits printed.
 * @value: value to be printed.
 * Return: number of digits printed.
 */
int print_integers_helper(int count, int value)
{
	if (value >= 10)
	{
		count += print_integers_helper(count, value / 10);
	}

	_putchar('0' + (value % 10));
	count++;

	return (count);
}
