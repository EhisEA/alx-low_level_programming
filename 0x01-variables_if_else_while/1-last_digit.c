#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	int a;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	a = n % 10;
	printf("Last digit of %d is %d %s\n", n, a,
		 a == 0 ? "and is 0" : a > 5 ?
		 "and is greater than 5" :
		 "and is less than 6 and not 0");

	return (0);
}
