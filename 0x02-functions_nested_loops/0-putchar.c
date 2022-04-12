#include <stdio.h>
/**
 * main - Entry point
 *
 *
 * return 0 Always(success)
 */
int main(void)
{
	char a[8] = "_putchar";
	int i = 0;

	while(i < 9)
	{
		putchar(a[i]);
		i++;
	}

	putchar('\n');
	return (0);
}
