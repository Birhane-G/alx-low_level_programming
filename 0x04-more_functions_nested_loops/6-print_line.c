#include "main.h"
#include <stdio.h>

/**
 * Print_line - print straight line in terminal
 * @n: number of times the line printed
 *
 * Return: no return value
 */

void print_line(int n)
{
	int i;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
	else if (n <= 0)
	{
		_putchar('\n');
	}
}
