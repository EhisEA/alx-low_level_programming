#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */


int print_alphabet(void);

int main(void)
{
	print_alphabet();
	return (0);
}

int print_alphabet(void){
	char start = 'a';
	char end = 'z';
	
	++end;
	while (start != end) {
		putchar(start);	
		++start;
	}
	putchar('\n');
	return (0);
}
