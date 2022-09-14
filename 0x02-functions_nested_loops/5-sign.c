#include"main.h"
/**
 *print_sign - function that print a sign of a number
 *@n: parameter of our function
 *Description: our function help us to know wheather a number is positive
 *Return: 1, 0 or -1
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
	_putchar('0');
	return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
