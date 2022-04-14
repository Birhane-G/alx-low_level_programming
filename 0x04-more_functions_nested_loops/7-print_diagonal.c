#include "main.h"
#include <stdio.h>
/**
 * print_diagonal - draw diagonal line on terminal
 * @n: number of times should be print
 *
 * Return: no return value
 */
void print_diagonal(int n)
{
	int i, j;

	if (n > 0)
	{		
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < i; j++)
			{
			_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
	else if (n <= 0)
	{
	_putchar('\n');
	}
}
