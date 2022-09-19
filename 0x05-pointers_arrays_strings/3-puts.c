#include"main.h"
#include<stdio.h>
/**
 *_puts - this is our function name
 *@str: this is our only argument
 *Description: this function print a string
 *Return: void
 */

void _puts(char *str)
{
	for (; *str != '\0';)
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');


}
