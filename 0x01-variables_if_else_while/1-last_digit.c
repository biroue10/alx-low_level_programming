#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if ( n%10 > 5 )
	{
		printf("Last digit of %d is %n and is greater than 5", n, n%10);
	}
	else if ( n%10 =10 )
	{
		printf("Last digit of %n is %n and is 0", n, n%10);
	}
	else if ( n<= 5 && !=0 )
	{
		if ( n< 0){
			printf("Last digit of %n is %n and is less than %n and not 0", n, -n%10);
		}
		else 
		{
			printf("Last digit of %n is %n and is less than %n and not 0", n, n%10);
		}
	}
	return (0);
}
