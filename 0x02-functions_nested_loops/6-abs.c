#include <stdio.h>
#include "main.h"

/**
 * _abs - main func
 * @n: arg
 *
 * Return: any 0
 */

int _abs(int n)
{
	if (n < 0)
	{
		n = n * -1;
		return (n);
	}
	else
	{
		n = n * 1;
		return (n);

	}
}
