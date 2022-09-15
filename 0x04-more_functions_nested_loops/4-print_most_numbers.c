#include"main.h"
#include<stdio.h>

/**
 *print_most_numbers - this is our function name
 *Description: Our function print just some numbers
 *Return: this function xill return all numbers without 2 and 4
 */
void print_most_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		if (i == 2 || i == 4)
		{
			continue;
		}
		else
		{
			_putchar(i + '0');
		}
	}
	_putchar('\n');
