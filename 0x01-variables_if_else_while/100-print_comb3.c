#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int c[10] = {0,1,2,3,4,5,6,7,8,9};
	int i = 0;
	int j = 0;

	for (i = 0; i < 9; i++)
	{
		j = i + 1;
		for (; j < 10; j++)
		{
			putchar(i + '0');
			putchar(j + '0');
			if (i != 8)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');

	return (0);
}
