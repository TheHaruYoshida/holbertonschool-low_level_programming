#include <stdio.h>

/**
 * main - Prints its name
 *
 * @argv: contains the name
 * @argc: unused
 * Description: prints its name, followed by a new line.
 * Return: always 0
 */
int main(__attribute__((unused)) int argc, char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
