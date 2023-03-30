#include "main.h"

/**
 * print_number - prints the given number as parameter
 * @n: the number to print
 **/
void print_number(int n)
{
	unsigned int num = n;

	if (n < 0)
	{
		_putchar('-');
		n *= -1;
	}

	if (num / 10)
		print_number(n / 10);

	putchar(num % 10 + '0');
}
