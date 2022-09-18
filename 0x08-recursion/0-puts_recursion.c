#include "main.h"
#include <stdio.h>

/**
 * _puts_recursion - print a string
 * @s:pointer
 *
 * Return - void
 */
void _puts_recursion(char *s)
{
	if (s[0] == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(s[0]);
	_puts_recursion(s + 1);
}
