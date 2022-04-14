#include "main.h"
#include <stdio.h>

/**
 * print most numbers - print numbers 0 - 9
 *
 * return: no return value
 */
void print_most_numbers(void)
{
	int i = 0;

	while (i <= 9)
	{
		if ( i == 2 || i == 4 )
		continue;

		_putchar(i);
		i++;
	}
}
