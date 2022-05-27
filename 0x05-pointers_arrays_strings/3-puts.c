#include "main.h"
#include <stdio.h>
/**
 * _puts - print a string and new line
 * @str: pointer to a string
 *
 * return: 0
 */
void _puts(char *str)
{
	int i = 0;

	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
