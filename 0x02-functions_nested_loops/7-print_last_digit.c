#include "main.h"
/**
 * print_last_digit - self explian
 * @num: int num should be trim
 * Return: int digit
 */

int print_last_digit(int num)
{
	int last_digit = 1;

	if (num < 0)
		num *= -1;

	last_digit *= num % 10;
	_putchar(last_digit + 48);

	return (last_digit);
}
