#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c= 'a';
	char z= 'z';
	z++;
	while(c != (z))
	{
		putchar(c++);
	}
	putchar('\n');

	return (0);
}
