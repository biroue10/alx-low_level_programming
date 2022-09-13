#include "main.h"

/**
 * main - Entry point
 * Description: this function print alphabet characters in lower case
 * Return: Always 0 (Success)
 */
void print_alphabet(void)
{
	char s = 'a';

	for (s = 'a'; s <= 'z'; s++)
	{
	_putchar(s);
	}
	_putchar('\n');
}
