#include "main.h"
#include <stdio.h>
/**
 * factorial - factorial of given number
 * @n: number
 *
 * Return: result of @n factorial 
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 1)
		return (1);

	return (n * factorial(n - 1));
}
