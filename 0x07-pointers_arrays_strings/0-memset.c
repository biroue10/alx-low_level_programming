#include"main.h"
#include<stdio.h>
/**
 *_memset - this is our function name
 *Description:this function fill a memory with a bit
 *@s: this is the adresse os memory to be filled
 *@b: this is the bit to fill the memory
 *@n:this is the number of time memory shall be filled
 *Return:our fucntion shall return a pointer to a memory s
 */


char *_memset(char *s, char b, unsigned int n)
{
int i;

for (i = 0; i < n; i++)
{
	s[i] = b;
}
return (*s);
}
