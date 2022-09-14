#include<stdio.h>
#include"main.h"

/**
 *print_to_98 - est une fonction puissante
 *Description: cette fonction affiche les nombre
 *@n: ceci est notre parametre que nous passons comme argument
 *Return: la fonction retourne les chiffre dans un ordre defini
 */

void print_to_98(int n)
{
	while (n <= 98)
	{
	printf("%d", n);
	printf(",");
	printf(" ");
	}
	n++;
}

