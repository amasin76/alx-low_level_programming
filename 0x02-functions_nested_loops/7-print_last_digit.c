#include "main.h"

int print_last_digit(int num)
{
	if (num < 0)
		num *= -1;

	return num % 10;
}