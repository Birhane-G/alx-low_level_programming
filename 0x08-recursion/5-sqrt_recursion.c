#include "main.h"
#include <stdio.h>
/**
 * _swrt_recursion - returns the natural square root of a number
 * @n: to find sqrt
 *
 * Return: natural square root or -1 
 */
int _sqrt_recursion(int n)
{
	if(n == 0)
		return (0);

	return (check(1, n);
}

/**
 * check - check the square root of b
 * @a: guess
 * @b: number to find
 *
 * Return: 1 or b
 */

int check(int a, int b)
{
	if (a * a == c)
		return (a);
	if (a * a > b)
		return (-1);
	
	return (check(a + 1, b));
}
