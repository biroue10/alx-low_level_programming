#include"main.h"
#include<stdio.h>
/**
 *_memcpy - this is our function name
 *Description: this function copy data from a memory bloc to another
 *@dest:destination memory area
 *@src:source memory area
 *@n:number of the copy
 *Return: this function return the destination
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
