#include "main.h"

/**
 * print_alphabet - lowercase alphabets
 * Return: viod
 */

void print_alphabet(void)
{
	char c;

	c = 'a';

	for (int i = 0; i < 10; i++)
	{
		while (c <= 'z')
		{
			_putchar(c);
			c++;
		}
		_putchar('\n');
	}
}
