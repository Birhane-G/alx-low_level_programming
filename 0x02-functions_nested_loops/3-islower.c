#include <stdio.h>
#include <ctype.h>
#include "main.h"
/**
 * _islower - check lowercase characters
 *
 * return: always 0
 */

int _islower(int c)
{
	if (islower(c))
	return (1);
	else
	return (0);
}

