#include <stdio.h>
/**
 *main - entry point
 *This program print all posible combination
 *of twao digit numbers
 *Return:0 - success
 *
 */
int main(void)
{
	int a, b;

	for (a = 0; a < 100; a++)
	{
		for (b = 1; b < 100; b++)
		{
			if (a < b)
			{
				putchar((a / 10) + '0');
				putchar((a % 10) + '0');
				putchar(' ');
				putchar((b / 10) + '0');
				putchar((b % 10) + '0');
				if (!(a == 98 && b == 99))
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}