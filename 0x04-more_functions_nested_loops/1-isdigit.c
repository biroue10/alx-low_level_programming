#include"main.h"
#include<stdio.h>
/**
 *_isdigit - this is the name of our function
 *@: This is the parameter of our function
 *Return: our function shall return 1 or 0
 *Description: this function caracter as arguement ant print wheather it is a number or not 
*/
int _isdigit(int c)
{
if (c <= '9' && c >= '0')
{
	return (1);
}
else
{
	return (0);
}
}
