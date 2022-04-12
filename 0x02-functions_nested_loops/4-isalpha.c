#include <stdio.h>
#include "main.h"

/**
 * _isalpha - alphabetic character
 * @c: parameter
 *
 * Return: 0
 *
 *
 */

int _isalpha(int c)
{
	if ((c > 96 && c < 123) || (c > 64 && c < 91))
		return (1);
	else
		return (0);
}
