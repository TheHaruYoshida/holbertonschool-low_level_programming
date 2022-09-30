#include "main.h"
#include <stdio.h>
#include "_add.c"
/**
 * addex - check the code
 *
 * Description: adds the variables 'n' and 'm' and prints the resultant value
 * Return: Always 0.
 **/
int addex(void)
{
	int n;

	n = add(89, 9);
	printf("%d\n", n);
	return (0);
}
