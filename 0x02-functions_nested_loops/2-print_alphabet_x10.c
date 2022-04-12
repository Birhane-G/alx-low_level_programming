#include <stdio.h>
/**
 * main - check the code
 *
 * return: always 0
 */
void print_alphabet_x10(void)
{
	int i = 0;
	while(i < 10)
	{
		char a = 'a';
		while(a <= 'z')
		{
		putchar(a);
		a++;
		}
		putchar('\n');
	i++;
	}
}
