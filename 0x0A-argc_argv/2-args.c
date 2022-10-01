#include<stdio.h>
/**
 *main - this is our function name
 *Description:our function print argument
 *@argc: this is the first argument
 *@argv: this is the second argument
 *Return: our function return list of an array of arguments
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
