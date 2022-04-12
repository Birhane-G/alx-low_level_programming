#include <stdio.h>
#include <ctype.h>
#include "main.h"
/**
 * _islower - check lowercase characters
 * @c: para 1
 *
 * return:  0 or 1
 *
 */

int _islower(int c)
{
	if (islower(c))
	return (1);
	else
	return (0);
}

