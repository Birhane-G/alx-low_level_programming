#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * Print_line - print straight line in terminal
 * @n: no of character
 *
 * Return: 
 */
void print_line(int n)
{
	int i = 0;

	for (i = 0; i < n; i++)
	{
		_putchar("_");
	}
	_putchar('\n');
}
