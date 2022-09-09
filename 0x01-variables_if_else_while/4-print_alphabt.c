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
	int n='a';
	while(n<='z'){
		if(n!='e')
		{
			if(n!='q'){
				putchar(n);
			}
		}

			n++;
	}
	putchar('\n');
	return (0);
}
