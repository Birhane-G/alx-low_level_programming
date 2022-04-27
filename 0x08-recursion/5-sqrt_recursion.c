#include "main.h"
#include <stdio.h>
/**
 * sqrt_check - Checks for the square root of c
 * @g: Guess at sqrt
 * @c: Number to find sqrt of
 *
 * Return: -1 or sqrt of c
 */

int sqrt_check(int g, int c)
{
	if ((c * c) == g)
		return (c);
	if (c ==  g / 2)
		return (-1);

	return (sqrt_check(g, c + 1));
}

/**
 * _sqrt_recursion - Returns the natural square of a number
 * @n: integer to find sqrt of
 *
 * Return: Natural square root or -1
 */

int _sqrt_recursion(int n)
{
	int c = 0;

	if (n < 0)
		return (-1);

	else if (n == 1)
		return (1);

	return (sqrt_check(n, c));
}
