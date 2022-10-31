#include "variadic_functions.h"
#include <stdarg.h>

/**
  * sum_them_all - sums all its parameters.
  * @n: constant number of arguments in function
  *
  * Return: the sum of all its parameters.
  **/
int sum_them_all(const unsigned int n, ...)
{
	va_list adds;
	unsigned int i;
	int sum;

	if (n == 0)
		return (0);

	va_start(adds, n);

	sum = 0;
	for (i = 0; i < n; i++)
		sum += va_arg(adds, int);

	va_end(adds);

	return (sum);
}
