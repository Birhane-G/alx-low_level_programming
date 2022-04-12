#include <stdio.h>
#include "main.h"
/**
 * main - check the code
 *
 * return: Always 0.
 */
void print_alphabet();

int main()
{

	print_alphabet();
	return (0);
}

void print_alphabet(){

  char a = 'a';

  while(a <= 'z')
  {
	  putchar(a);
	  a++;
  }
	putchar('\n');
}
