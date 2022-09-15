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
	int compteur;

	for (compteur = 0; compteur <= n; compteur++)
	{
		if (n == 0 || n < 0)
		{
			_putchar('\n');
		}
		else
		{
		_putchar('_');
		}
}
}
