#include <stdio.h>
#include "main.h"

/**
 *main - this is our main function
 *Description:this function return the numbers of arguments
 *@argc: this is our first argument
 *@argv: this is our second argument
 *Return: our function return an integer
 */
int main(int argc, char __attribute__ ((unused)) *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
