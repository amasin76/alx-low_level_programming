#include "main.h"
#include <stdio.h>

/**
 * print_number - prints the given number as parameter
 * @n: the number to print
 **/
void print_number(int n)
{
	if (n < 0)
	{
		putchar('-');
		n *= -1;
	}

	if (n / 10)
		print_number(n / 10);

	putchar(n % 10 + '0');
}
