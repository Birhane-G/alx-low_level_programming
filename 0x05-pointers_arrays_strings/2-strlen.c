#include "main.h"
#include <stdio.h>
/**
 * _strlen - return length of string
 * @s: to check
 *
 * return: length
 */
int _strlen(char *s)
{
	int length = 0;

	while (s[length])
		length++;
	return (length);
}
