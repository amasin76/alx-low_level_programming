#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 *main - Entry point
 *Return: Always 0 (Success)
 */
int main(void)
{

int zero_in_ascii = 48;
const int NINE_IN_ASCII = 57;

while (zero_in_ascii <= NINE_IN_ASCII)
{
putchar(zero_in_ascii);
putchar(',');
putchar(' ');
zero_in_ascii++;
}

putchar('\n');

return (0);
}
