#include "main.h"
/**
  * more_numbers - Prints 10 times the numbers from 0 to 14
  *
  * Description: Prints the numbers from 0 to 14, then newline, and
  * prints from 0 to 14 again until 10 times.
  * Return: void.
  */

void more_numbers(void)
{
	int f, c = 0;

	for (f = 0; f <= 9; f++)
	{
		for (c = 0; c <= 14; c++)
		{
			if (c >= 10)
			{
				_putchar(c / 10 + '0');
			}
			_putchar(c % 10 + '0');
		}
		_putchar('\n');
	}
}
