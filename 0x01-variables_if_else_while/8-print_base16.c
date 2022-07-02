#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i = 0;
	char startOfHex = 'a';
	
	for (i = 0; i < 16; i++)
	{
		if( i < 10)
		{
		putchar(i == 0 ? '0' : i % 10 + '0');
		}else
		{
		putchar(i == 0 ? '0' :  (i % 10 + startOfHex));
		//putchar(i == 0 ? '0' :  (i % 16 + 'a'));
		}
	}
	putchar('\n');

	return (0);
}
