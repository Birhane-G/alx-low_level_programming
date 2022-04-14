#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * Print_line - print straight line in terminal
 * @n: no of times the line printed
 *
 * Return: no return value
 */

void print_line(int n)
{

	if(n > 0)
	{
		int i;

		for (i = 0; i < n; i++)
		{
			_putchar("_");
		}
	
	else
	_putchar('\n');
}
