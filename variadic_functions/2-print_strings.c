#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - prints strings
 * @separator: string to be printed between strings
 * @n: number of strings passed to the function
 * Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list strlist;
	unsigned int i = 0;
	char *str;

	va_start(strlist, n);

	while (i < n)
	{
		str = va_arg(strlist, char*);

		if (str == NULL)
		{
			printf("%s", "(nil)");
		}
		else
		{
			printf("%s", str);
		}

		if (separator != NULL && i != n - 1)
			printf("%s", separator);

		i++;
	}

	va_end(strlist);

	printf("\n");
}
