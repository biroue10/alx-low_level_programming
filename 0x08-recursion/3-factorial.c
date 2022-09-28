#include"main.h"
/**
 *factorial - this is our function name
 *Description: our function return factorial of a given number
 *@n: this is our only argument
 *Return: our function shall return an int
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}


