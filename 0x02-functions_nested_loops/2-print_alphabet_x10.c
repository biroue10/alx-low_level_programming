#include "main.h"
/**
 * print_alphabet - Entry point
 * Description: a function that prints the alphabet
 * in lowecase followed by a new line
 * Return: void
 */

void print_alphabet_x10(void)
{
	char s = 'a';
	int compteur;

	for (s = 'a'; s <= 'z'; s++)
	{
		_putchar(s);
		for (compteur = 0; compteur <= 10; compteur++)
		{
			_putchar('\n');
		}
	}
}
