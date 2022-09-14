#include"main.h"
/**
 *_isalpha - this is my function
 *Description: this function whearther a caracter is in lower case or uppercase
 *Return: 0 or 1
 *@c: this is the parameter of our function
 **/

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') && (c >= 'A' && c <= 'Z'))
	{
		return (1);

}
else
{
	return (0);
}
}
