#include "main.h"
/**
 * jack_bauer - prints every minute of the day
 * Return: void
 */

void jack_bauer(void)
{
	for (int i = 0; i <= 23; i++)
	{
		for (int j = 0; j <= 23; j++)
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
