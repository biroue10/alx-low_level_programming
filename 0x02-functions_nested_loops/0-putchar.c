#include "main.h"
/**
 * main - this function print a string wtihout using a standard library
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c[] = "_putchar";
	int compteur;

	for (compteur = 0; compteur <= 8; compteur++)
	{
		_putchar(c[compteur]);
	}
	_putchar('\n');
	return (0);
}

