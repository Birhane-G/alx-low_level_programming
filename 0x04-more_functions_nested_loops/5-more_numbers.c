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

	for (i = 0; i < 10; i++)
	{
		int j;

		for (j = 0; j < 15; j++)
		{
			if (j >= 10)
			_putchar('0' + (j / 10));
			_putchar('0' + (j % 10));
		}
		_putchar('\n');
	}
}
