#include <stdio.h>
/**
 * main - print the letters a - z lowercase
 * Return: 0 (Success)
 */
int main(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
	putchar(letter);
	letter++;
	}
	putchar('\n');
	return 0;
}
