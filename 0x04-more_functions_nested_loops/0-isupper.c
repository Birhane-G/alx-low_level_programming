#include "main.h"
#include <stdio.h>
#include <ctype.h>
/**
 * main - check if the code is upper
 * case or not 
 *
 * Return: 1 or 0.
 */
int _isupper(int c)
{
	if (isupper(c))
		return (1);
	else
		return (0);
}
