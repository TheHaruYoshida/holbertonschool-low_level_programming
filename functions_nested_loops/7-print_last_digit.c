#include "main.h"
#include "_print_last_digit.c"
/**
 * ldigit - prints the last digit of a number
 *
 * Description: prints the las digit of the number that takes the variable
 * Return: Always 0.
 */
int ldigit(void)
{
	int r;

	print_last_digit(98);
	print_last_digit(0);
	r = print_last_digit(-1024);
	_putchar('0' + r);
	_putchar('\n');
	return (0);
}
