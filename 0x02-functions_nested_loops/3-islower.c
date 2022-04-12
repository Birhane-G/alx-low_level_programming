#include <stdio.h>
/**
 * main - check the code
 *
 * return: always 0
 */
int _islower(int c);

int main(void)
{
	int r;

	r = _islower('H');
	_putchar(r + '0');
	r = _islower('0');
	_putchar(r + '0');
	r = _islower(108);
	_putchar(r + '0');
	_putchar('\n');
	return (0);
}

int _islower(int c)
{
	if(islower(c))
		return (1);
	else
		return (0);
}
