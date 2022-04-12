#include <stdio.h>
#include "main.h"

/**
 * print_last_digit - last digit
 * @n: arg
 *
 * Return: 0 or 1
 */
int print_last_digit(int n)
{
	int ll = n % 10;
	int nv;

	if (n < 0)
	{
		nv = -1 * ll;
		_putchar(nv + '0');
		return (nv);
	}
	else
	{
		_putchar(ll + '0');
		return (ll);
	}
}
