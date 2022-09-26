#include"main.h"
#include<stdio.h>

/**
 *_strchr - this is our function name
 *Description: this function locate a caracter
 *@s:this is the string pointer
 *@c:this is the caracter to locate
 *Return: our function return a caracter
 */

char *_strchr(char *s, char c)
{
do

{
if (*s == c)
{
return (s);
}
} while (*s++);
return (NULL);
}




