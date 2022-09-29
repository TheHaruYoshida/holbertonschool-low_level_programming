#include "main.h"
#include <stdio.h>
#include "_abs.c"
/**
 * abcd - check the code
 *
 * Description: computes if the value of the variable is absolute or not,
 * if it is prints it value positive if not, prints it negative.
 * Return: returns 0
 */
int abcd(void)
{
	int r;

	r = _abs(-1);
	printf("%d\n", r);
	r = _abs(0);
	printf("%d\n", r);
	r = _abs(1);
	printf("%d\n", r);
	r = _abs(-98);
	printf("%d\n", r);
	return (0);
}
