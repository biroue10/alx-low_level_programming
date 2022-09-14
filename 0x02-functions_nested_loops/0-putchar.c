#include "main.h"
/**
* main - this function print a string wtihout using a standard library
* Return: Always 0 (Success)
*/
int main(void)
{
	char school[10] = "_putchar";

	int i;

	for (i = 0; i < 8; i++)
	{
		_putchar(school[i]);
	}
	_putchar(10);
	return (0);
}
