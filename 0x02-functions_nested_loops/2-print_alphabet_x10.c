#include "main.h"
/**
* print_alphabet_x10  - function that print alpahbet ten times,
* Return: void
*/
void print_alphabet_x10(void)
{
	char s = 'a';
	int compteur;

	for (compteur = 0; compteur <= 9; compteur++)
	{
		for (s = 'a'; s <= 'z'; s++)
		{
			_putchar(s);
		}
	_putchar('\n');
}
}
