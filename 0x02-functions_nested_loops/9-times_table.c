
#include "main.h"

/**
 * times_table - Prints the 9 times table
 */
void times_table(void)
{
	int num, pos, result;

	for (num = 0; num <= 9; num++)
	{
		_putchar('0');
		for (pos = 1; pos <= 9; pos++)
		{
			_putchar(',');
			_putchar(' ');
			result = num * pos;
			if (result <= 9)
				_putchar(' ');
			else
				_putchar((result / 10) + '0');
			_putchar((result % 10) + '0');
		}
		_putchar('\n');
	}
}
