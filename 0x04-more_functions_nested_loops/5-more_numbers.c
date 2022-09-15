#include"main.h"
#include<stdio.h>
/**
 *more_numbers - this is our name function
 *Description: our function print numbers
 *Return: our function return numbers
 */

void more_numbers(void)
{
int a;
int compteur;
for (compteur = 0; compteur <= 9; compteur++)
{
	for (a = 0; a <= 13; a++)
	{
		_putchar(a);
		_putchar('\n');
}
}
}
