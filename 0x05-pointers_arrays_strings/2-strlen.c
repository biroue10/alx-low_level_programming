#include"main.h"
#include<stdio.h>

/**
 *_strlen - this is our function name
 *Description: our function will return the lenght of a string
 *@s: this is the argument of our function
 *Return: our function shall return an integer
 */
int _strlen(char *s)
{
	int taille;

	while (*s != '\0')
	{
		taille++;
		*s++;
	}
	return (taille);

}
