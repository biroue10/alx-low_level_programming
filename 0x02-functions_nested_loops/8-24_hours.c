#include<stdio.h>
#include"main.h"
/**
 *jack_bauer - this is my function name
 *Description: this function print hour from the
 *Return: our function return hour from one day
 *
 *
  */
void jack_bauer(void)
{
int compteur;
int heure = 0;
int compteur2;

for (compteur2 = 0; compteur2 <= 23; compteur2++)
{
for (compteur = 0; compteur <= 59; compteur++)
{
	printf("%02d:%02d", heure, compteur);
	printf("\n");
	if (compteur == 59)
		{
		heure += 1;
	}
}
}
}
