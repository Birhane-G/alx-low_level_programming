#include "main.h"
#include <stdio.h>

/**
 * print most numbers - print numbers 0 - 9
 *
 * return: no return value
 */
void print_most_numbers(void)
{
	int i;

	for (i = 48; i < 59; i++)
	{
		if (i == 50 || i == 53)
		continue;

		_putchar(i);
	}
	_putchar('\n');
}
