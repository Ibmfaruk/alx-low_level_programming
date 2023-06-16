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

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n > 5)
	printf("Last digit of %d is %m and is greater than 5\n", n);
	return (0);
}
