#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
#include <string.h>
/**
* print_all - prints anything
* @format: list of types of arguments
*/

void print_all(const char * const format, ...)
{
	va_list pra;
	int i = 0;
	int iff;
	char *string;

	va_start(pra, format);
	while (format != NULL && format[i] != '\0')
	{
		iff = 1;
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(pra, int));
				break;
			case 'i':
				printf("%d", va_arg(pra, int));
				break;
			case 'f':
				printf("%f", va_arg(pra, double));
				break;
			case 's':
				string = va_arg(pra, char *);
				if (string == NULL)
				{
					printf("(nil)");
					break;
				}
				printf("%s", string);
				break;
			default:
				iff = 0;
				break;
		}
		if (format[i + 1] && iff)
			printf(", ");
		i++;
	}
	printf("\n");
}
