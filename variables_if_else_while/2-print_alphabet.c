#include <stdio.h>
/**
   * main - prints the alphabet in lowercase, followed by a new line.
   *
   * Description: Prints each character of the alphabet from "a"
   * up to "z" in lowercase
   * Return: 0
   */
int main(void)
{
	char c = 'a';

	for (c = 'a' ; c <= 'z' ; c++)
		putchar(c);
	putchar('\n');
	return (0);
}
