#include "main.h"
#include <stdio.h>
/**
 * print_square - print square
 * @size: no of square
 *
 * Return: no return value
 */
int print_square(int size)
{
	int i, j;

	if (size > 0)
	{
		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size; j++)
			{
				_putchar('#');
			}
		_putchar('\n');
		}
	}
	else if (size <= 0)
	{
		_putchar('\n');
	}
}
