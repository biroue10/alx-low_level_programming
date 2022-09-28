#include"main.h"
/**
 * _pow_recursion - this is our function name
 *Description: this function return x pow y
 *@x: this is our first argument
 *@y:this is our second argument
 *Return: our function return the result of x pow y
 */
int _pow_recursion(int x, int y)
{
	if (y == 1)
	{
		return (x);
	}
	else if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
