#include"main.h"
#include<stdio.h>
/**
 *print_diagonal - this is our function name
 *@n: this is the argument of our function
 *Description: our function print a triangle
 *Return: our function return tje traingle
 */
void print_diagonal(int n)
{
	int i = 0, ii;

	while (i < n && n > 0)
	{
		ii = 0;
		while (ii < i)
		{
			_putchar(' ');
			ii++;
		}

		_putchar('\\');
		_putchar('\n');
		i++;
	}
	if (i == 0)
		_putchar('\n');
}
