#include "main.h"
#include <stdio.h>
/**
 * _strlen - check the length of a  string
 * @s: string to check
 *
 * Return: length of a string
 */
int _strlen(char *s)
{
	int length = 0;

	while (s[length])
		length++;
	return (length);
}
