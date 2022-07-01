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

	z++;
	while (c != (z))
	{
		if (c != 'q' && c!= 'e')
		{
			putchar(c);
		}
		c++;
	}
	putchar('\n');

	return (0);
}
