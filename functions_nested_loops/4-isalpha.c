#include "main.h"
#include "_isalpha.c"
/**
 * abcalpha - checks for lowercase or uppercase letters
 *
 * Description: Checks for lowercase or uppercase letters. prints "1"
 * if its lowecase and prints "0" otherwise
 * Return: 0 or 1 , it depends of isalpha().
 */
int abcalpha(void)
{
	int r;

	r = _isalpha('H');
		_putchar(r + '0');
		r = _isalpha('o');
		_putchar(r + '0');
		r = _isalpha(108);
		_putchar(r + '0');
		r = _isalpha(';');
		_putchar(r + '0');
		_putchar('\n');
		return (0);
}
