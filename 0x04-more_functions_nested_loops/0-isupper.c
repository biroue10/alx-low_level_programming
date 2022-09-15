#include"main.h"
#include<stdio.h>
/**
 *_isupper - this is our function name
 *Description: this function check if it is uppercase
 *@c:This is the parameter of our function
 *Return: our function return 1 or 0
 *
 *
 */

int _isupper(int c)
{
	if (c <= 'Z' && c >= 'A')
	{
	return (1);
	}
	else
	{
		return (0);
	}
}
