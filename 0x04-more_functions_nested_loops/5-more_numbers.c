#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * more_numbers - print numbers 0 - 14
 *
 * Return: no return value
 */
void more_numbers(void)
{
	int i;

	for (i = 0; i <= 14; i++)
	{
		int j;

		for (j = 48; j < 63; j++)
		{
			_putchar(j);
		}
		_putchar('\n');
	}
}
