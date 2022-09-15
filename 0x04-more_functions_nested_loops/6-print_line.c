#include"main.h"
#include<stdio.h>
/**
 *print_line - this is our function name
 *@n: this is the argument of our function
 *Description: our function print pattern
 *Return: our function drawa pattern or print blanck space
 */


void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
