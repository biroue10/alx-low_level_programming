#include"main.h"
#include<stdio.h>
/**
 *swap_int - this is our function name
 *Description: this function swap two int using pointers
 *@a: this is our first argument
 *@b:this is our second argument
 *Return: our function shall return two variables with interchanged values
 *
 **/



void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*b = temp;
	*a = *b;
}
