#include <stdio.h>
/**
 *main - Entry point
 *Return: Always 0 (Success)
 */
int main(void)
{

int zero_in_ascii = 48;
const int NINE_IN_ASCII = 57;

for (; zero_in_ascii <= NINE_IN_ASCII; zero_in_ascii++)
{

putchar(zero_in_ascii);
if (zero_in_ascii == 57)
break;
putchar(',');
putchar(' ');
}

putchar('\n');

return (0);
}
