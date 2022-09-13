#include"main.h"
/**
 *_islower - function that check if a caracter is in lower case or not
 *@c: parameter of the function
 *Description: this function check wheaher a caracters is in lower case or not
 *return: this is the terminal instruction of our function
 **/
int _islower(int c)
{
	if (islower(c))
	{
	return (1);
	}
	else
	{
		return (0);
	}
}
