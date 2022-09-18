#include <stdio.h>
#include "main.h"

/**
 * print_alphabet - alphabet
 *
 * return: none
 */

void print_alphabet(void)
{
	char a = 'a';

	while (a <= 'z')
	{
	_putchar(a);
	a++;
	}
	_putchar('\n');
}
