#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - print greater than 5 less than 6 & 0
 * Return: 0 (Succes)
 */
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	int n;
	int m;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	m = n % 10;
	/* your code goes there */
	if (n > 5)
	printf("Last digit of %d is %d and is greater than 5\n", n, m);
	if (n == 0)
	printf("Last digit of %d is %d and is 0\n", n, m);
	else
	printf("Last digit of %d is %d and is less than 6 and not 0\n", n, m);
	return (0);
}
