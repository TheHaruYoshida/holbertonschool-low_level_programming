#include <stdio.h>
/**
 * main - prints all posible combinations of sigle-digit numbers.
 *
 * Description: putchar prints the value of the char variable n, n initializes
 * with '0' value and the for statement iterates until n ends with '9' value
 * another two putchars put a ',' and a ' '.
 * Return: all combinations of a single-digit numbers separated by commas.
 */
int main(void)
{
	int n = 48;

	while (n <= 57)
	{
		putchar(n);
		if (n < 57)
		{
			putchar(',');
			putchar(' ');
		}
		n++;
	}
	putchar('\n');
	return (0);
}
