#include "main.h"
#include <stdio.h>

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
		_putchar("%c", i);
	}
	_putchar('\n');
}
