#include"main.h"
/**
 *print_last_digit - function awesome
 *@i: our parameter
 *Return: our return statement
 *Description: our function print the last digit of a given number
 */

int print_last_digit(int n)
{
int lastdigit = n % 10;
if (lastdigit < 0)
lastdigit *= -1;

_putchar (lastdigit + '0');
return (lastdigit);
}
