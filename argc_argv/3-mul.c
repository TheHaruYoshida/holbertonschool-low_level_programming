#include "main.h"

/**
  * main - multiplies two numbers.
  * @argc: Count number of argument
  * @argv: Array of strings (argument)
  *
  * Return: always 0
  */
int main(__attribute__((unused)) int argc, char **argv)
{
	int i = 0;
	int j = 1;

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	for (i = 1; i < 3; i++)
		j *= atoi(argv[i]);
	printf("%d\n", j);
	return (0);
}
