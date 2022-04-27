#include "main.h"
#include <stdio.h>
/**
 * is_prime_number - print prime number
 *
 * Return 1 or 0
 */
int is_prime_number(int n)
{
	if (n == 2)
		return (1);

	return (check(1, n));
}
/**
 * check - check if the number is prime
 *
 *
 * Return: 1 or 0
 */
int check(int a, int b)
{
	if(b < 2 || b % f == 0)
		return (0);
	else if (a > b / 2)
		return (1);
	else
		return (check(a + 1, p );
}


