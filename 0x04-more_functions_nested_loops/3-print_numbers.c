#include "main.h"
#include <stdio.h>
/**
 * _putchar - print numbers 0 - 9
 *
 *
 * Return: no Return value
 */
void print_numbers(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		putchar("%c", i);
	}
	putchar("\n");
}
