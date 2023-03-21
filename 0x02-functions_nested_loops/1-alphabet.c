#include "main.h"

/**
 * print_alphabet - lowercase alphabets
 * Return: viod
 */

void print_alphabet(void)
{
	char c;

	c = 'a';
	while (c <= 'z')
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
}
