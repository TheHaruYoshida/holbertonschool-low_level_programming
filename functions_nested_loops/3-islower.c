#include "main.h"
#include "_islower.c"
/**
 * checker - check the code.
 *
 * Return: 0 or 1 depending of the number that checks.
 */
int checker(void)
{
	int r;

	r = _islower('H');
	_putchar(r + '0');
	r = _islower('o');
	_putchar(r + '0');
	r = _islower(108);
	_putchar(r + '0');
	_putchar('\n');
	return (0);
}
