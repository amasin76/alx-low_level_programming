#include <stdio.h>
#include <stdlib.h>
#include <time.h>
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

for (; first_digit <= NINE_IN_ASCII; first_digit++)
{

for (; second_digit <= NINE_IN_ASCII; second_digit++)
{

if (first_digit >= second_digit)
continue;
putchar(first_digit);
putchar(second_digit);

/* Ascii table => 56 = 8 and 57 = 9 */
if (first_digit == 56 && second_digit == 57)
continue;
putchar(',');
putchar(' ');
}
second_digit = ZERO_IN_ASCII;
}

putchar('\n');

return (0);
}
