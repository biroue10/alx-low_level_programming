#include<stdio.h>
#include<stdlib.h>
/**
*main - this is our function name
*Description: this function return the multiplication of two numbers
*@argc: this is the first arguments
*@argv: this is the second argument
*Return: this function return the result of multiplication
*/

int main(int argc, char *argv[])
{
	int i, j;

	if (argc == 1 || argc == 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		j = 1;
		for (i = 1; i < 3; i++)
		{
			j *= atoi(argv[i]);
		}
		printf("%d\n", j);
	}
}
