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
	int a, b;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (a = 0; a < n; a++)
		{
			for (b = 0; b < a; b++)
			{
				_putchar(32);

			}

			_putchar(92);
			_putchar('\n');
		}
	}
}
