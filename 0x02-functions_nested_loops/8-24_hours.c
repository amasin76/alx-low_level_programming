#include "main.h"
/**
 * jack_bauer - prints every minute of the day
 * Return: void
 */

void jack_bauer(void)
{
	int i = 0, j = 0;
	for (i; i <= 23; i++)
	{
		for (j; j <= 23; j++)
		{
			_putchar(48 + i / 10);
			_putchar(48 + i % 10);
			_putchar(':');
			_putchar(48 + j / 10);
			_putchar(48 + j % 10);
			_putchar('\n');
		}
	}
}
