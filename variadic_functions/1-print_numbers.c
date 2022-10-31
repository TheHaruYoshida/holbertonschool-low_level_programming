#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
  * print_numbers - prints numbers, followed by a new line
  * @separator: String between each number
  * @n: Number of integers in function
  *
  */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list cnt;
	unsigned int i;

	va_start(cnt, n);

	for (i = 0; i < n; i++)
	{
		if (i == n - 1 || separator == NULL)
			printf("%d", va_arg(cnt, int));

		else
			printf("%d%s", va_arg(cnt, int), separator);
	}
	printf("\n");

	va_end(cnt);
}
