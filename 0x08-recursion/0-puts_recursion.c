#include"main.h"
/**
 * _puts_recursion - this is our function name
 *Description: this function print string
 *@s: this is our first and only argument
 *Return: this function return a string
 *
 */

void _puts_recursion(char *s)
{
	int i;

	if(*s)
	{
		_putchar(s);
	}
	_putchar('\n');
	return ;
}
