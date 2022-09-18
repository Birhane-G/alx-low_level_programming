#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_numbers - print numbers 0 - 9
 *
 * Return: no Return value
 */

void print_numbers(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
