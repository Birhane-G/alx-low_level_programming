#include "main.h"
#include <stdio.h>
/**
 * _strlen_recursion - return the length of string
 * @s: pointer
 *
 * Return: length of @s
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);

	return (1 + _strlen_recursion(s + 1));
}
