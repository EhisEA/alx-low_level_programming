#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i = 0;
	int j = 0;
	int k = 0;

	for (i = 0; i < 8; i++)
	{
		j = i + 1;	
		 for (; j < 9; j++)
		{	
			k = j + 1;
			 for (; k < 10; k++)
               		 {
                       		 putchar(i + '0');
                       		 putchar(j + '0');
                       		 putchar(k + '0');
                       		 if (i != 7)
                       		 {
                               		putchar(',');
                               		putchar(' ');
                        	}
			}
                }
	}
	putchar('\n');

	return (0);
}
