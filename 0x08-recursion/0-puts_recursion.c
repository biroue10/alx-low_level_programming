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
	int i = 0;

	if (*s && s[i] != '\n')
	{
		_putchar(s[i]);
		i++;
	}
	_putchar('\n');
}
