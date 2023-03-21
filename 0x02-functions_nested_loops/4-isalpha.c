#include "main.h"
#include <stdio.h>

/**
 * _isalpha - check lowercase alphabets
 * @c: the char should be checked
 * Return:  1 to letters , 0 otherwise
 */

int _isalpha(char c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
