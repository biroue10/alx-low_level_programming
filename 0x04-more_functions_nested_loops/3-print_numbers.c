#include"main.h"
#include<stdio.h>


/**
 *print_numbers - this is our function name
 *Description: our function print numbers
 *Return: we return the numbers
 */

void print_numbers(void)
{
int c;
for (c = '0'; c <= '9'; c++)
{
	_putchar(c);
}
_putchar('\n');
}
