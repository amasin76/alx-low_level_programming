#include <stdio.h>
int main()
{
	int s1 = 0, s2 = 1, nextSeq = 0, n = 50;

	printf("%d, %d, ", s1, s2);
	nextSeq = s1 + s2;

	while (nextSeq <= n)
	{
		printf("%d, ", nextSeq);
		s1 = s2;
		s2 = nextSeq;
		nextSeq = s1 + s2;
	}

	putchar('\n');

	return (0);
}