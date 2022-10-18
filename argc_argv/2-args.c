#include "main.h"
/**
 * main - prints all arguments it receives.
 * @argc: count numbers of arguments.
 * @argv: array of strings (arguments)
 *
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	int count;

	for (count = 0; count < argc; count++)
	{
		printf("%s\n", argv[count]);
	}
	return (0);
}
