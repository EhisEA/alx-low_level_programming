#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c = 'a';
	char z = 'z';
	char d = 'A';
	char f = 'Z';

	z++;
	f++;
	while (c != (z))
	{
		putchar(c++);
	}
		
	while (d != (f))
	{
		putchar(d++);
	}
	putchar('\n');

	return (0);
}
