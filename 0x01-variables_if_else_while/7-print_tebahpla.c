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

	c--;
	while (c != (z))
	{
		putchar(z--);
	}
	putchar('\n');

	return (0);
}
