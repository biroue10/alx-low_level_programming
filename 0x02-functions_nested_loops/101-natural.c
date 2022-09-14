#include<stdio.h>
#include"main.h"
/**
 *main - this is my main function
 *Description: this function print the somme of multiples
 *Return: it return the somme of mutiples
 */

#include<stdio.h>
int main(void)
{
	int compteur;
	int somme = 0;
for (compteur = 3; compteur < 1024; compteur++)
{
if ((compteur % 3 == 0) || (compteur % 5 == 0))
{
	somme = somme + compteur;
}
}
printf("%d", somme);
printf("\n");
return (0);
}
