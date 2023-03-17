#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 *main - Entry point
 *Return: Always 0 (Success)
 */
int main(void)
{

char ch = 'a';

while (ch <= 'z')
{
putchar(ch);
ch++;
}

putchar('\n');

return (0);
}
