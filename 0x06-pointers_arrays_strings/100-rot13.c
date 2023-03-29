#include "main.h"

/**
 * rot13 - Caesar Cipher
 * @str: the string to encrypt
 * Return: the encrypted string
 **/
char *rot13(char *str)
{
	int i = 0, j;

	char *raw = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char *r13 = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (; str[i]; i++)
	{
		j = 0;
		for (; raw[j]; j++)
			if (raw[j] == str[i])
			{
				str[i] = r13[j];
				break;
			}
	}
	return (str);
}

/**
 * two if's
 * for (i = 0; i < len; i++)
 *	{
 *		if ((str[i] >= 'a' && str[i] < 'n') || (str[i] >= 'A' && str[i] < 'N'))
 *			str[i] += 13;
 *		else if ((str[i] > 'm' && str[i] < 'z') || (str[i] > 'M' && str[i] < 'Z'))
 *			str[i] -= 13;
 *	}
 */
