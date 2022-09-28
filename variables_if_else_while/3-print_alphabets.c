#include <stdio.h>
/**
 * main - prints the alphabet, followed by a new line.
 *
 * Description: Prints each character of the alphabet from "a"
 * up to "z"
 * Return: 0
 */
int main(void)
{
	char c = 'a';

	for (c = 'a' ; c <= 'z' ; c++)
		putchar(c);
	c = 'A';
	for (c = 'A' ; c <= 'Z' ; c++)
		putchar(c);
	putchar('\n');
	return (0);
}
