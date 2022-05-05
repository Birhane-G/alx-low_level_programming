#include "main.h"
/**
 * _strlen - count array
 * @s: array of elements
 *
 * Return: 1
 */
int _strlen(char *s)
{
	unsigned int i;

	i=0;
	while (s[i] != '\0')
	{
		i++;
	}

	return (i);
}

/**
 * _strcpy - copy arrays
 * @dest: dest array
 * @src: array of elements
 *
 * Return: dest
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';

	return (dest);
}

/**
 * _strdup - array for prints a string
 * @str: array of elemnts
 *
 * Return: pointer
 */

char *_strdup(char *str)
{
	char *dst;
	unsigned int size;

	if (str == 0)
	{
		return (NULL);
	}
	_strcpy(dst, str);
	return (dst);
}
