#include <stdio.h>
/**
* main - prints the alphabet in lowercase, and reversed, followed by a new line
* Description: Prints each character of the alphabet from "a
* up to "z" in lowercase and reversed
* Return: 0
 */
int main(void)
{
	char c = 'z';

	for (c = 'z' ; c >= 'a' ; c--)
		putchar(c);
	putchar('\n');
	return (0);
}
