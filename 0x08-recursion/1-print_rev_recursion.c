#include"main.h"
/**
 * _print_rev_recursion - this is our function name
 *Description:our function print a string in a reverse form
 *@s:this is our first argument
 *Return: our function return void
 *
*/
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	else
	{
		 _print_rev_recursion(s + 1);
		 _putchar(*s);
}

