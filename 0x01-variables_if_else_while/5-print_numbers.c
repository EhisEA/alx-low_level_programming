#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	short int c = 0;
	
	while (c != 10)
	{
		printf("%d",c++);
	}
	putchar('\n');

	return (0);
}
