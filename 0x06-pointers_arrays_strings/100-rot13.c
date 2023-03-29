#include "main.h"

/**
 * rot13 - Caesar Cipher
 * @s: the string to encrypt
 * Return: the encrypted string
 **/
char *rot13(char *str)
{
	int key = 13, len = 0, i = 0;

	while (str[len])
		len++;

	for (i = 0; i < len; i++)
	{
		if ((str[i] >= 'a' && str[i] < 'n') || (str[i] >= 'A' && str[i] < 'N'))
			str[i] += 13;
		else if ((str[i] > 'm' && str[i] < 'z') || (str[i] > 'M' && str[i] < 'Z'))
			str[i] -= 13;
	}

	return str;
}
