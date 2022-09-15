#include"main.h"
#include<stdio.h>

/**
 *print_most_numbers - this is our function name
 *Description: Our function print just some numbers
 *Return: this function xill return all numbers without 2 and 4
 */
void print_most_numbers(void){
	int c;
	if (((c >= '0')&&(c < '2' ))&&((c > '4')&&(c <= '9'))){
	_putchar(c);
	}
	_putchar('\n');
}
