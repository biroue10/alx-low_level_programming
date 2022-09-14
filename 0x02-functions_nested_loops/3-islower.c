#include"main.h"
/**
 *_islower - function that check if a caracter is in lower case or not
 *@c: parameter of the function
 *Description: this function check wheaher a caracters is in lower case or not
 *Return: return 0 or 1
 **/
int _islower(int c)
{
if (c >= 'a' && c <= 'z')
{
	return (1);
}
else
{
	return (0);
}
}
