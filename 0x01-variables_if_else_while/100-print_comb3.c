#include <stdio.h>
/**
 *main - Entry point
 *Return: Always 0 (Success)
 */
int main(void)
{

	const int ZERO_IN_ASCII = 48;
	const int NINE_IN_ASCII = 57;

	int first_digit = ZERO_IN_ASCII;
	int second_digit = ZERO_IN_ASCII;

	for (; first_digit <= NINE_IN_ASCII - 1; first_digit++)
	{

		for (; second_digit <= NINE_IN_ASCII; second_digit++)
		{

			if (first_digit >= second_digit)
				continue;
			putchar(first_digit);
			putchar(second_digit);

			/* Prevent adding comma on last element */
			if (first_digit == NINE_IN_ASCII - 1 && second_digit == NINE_IN_ASCII)
				continue;

			putchar(',');
			putchar(' ');
		}

		second_digit = ZERO_IN_ASCII;
	}

	putchar('\n');

	return (0);
}
