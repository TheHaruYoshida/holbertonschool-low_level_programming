#include <stdio.h>
/**
 * main - prints all numbers of base 16 in lowercase
 *
 * Description: the for statment iterates from 0 to 0, printing each number.
 * After that, another for iterates from 'a' to 'f' printing each letter
 * Return: All the numbers of base 16 in lowercase
 */
int main(void)
{
	int n = 0;
	char c = 'a';

	for (n = 48; n <= 57; ++n)
		putchar(n);
	for (c = 'a'; c <= 'f'; c++)
		putchar(c);
	printf("\n");
	return (0);
}
