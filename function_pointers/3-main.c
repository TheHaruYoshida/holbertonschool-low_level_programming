#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>
#include <string.h>

/**
  * main - performs simple operations
  * @argc: Number of arguments.
  * @argv: Array of arguments.
  *
  * Return: 0.
  */
int main(int argc, char *argv[])
{
	int a, b;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	if ((argv[2][0] != 37 && argv[2][0] != 47 && argv[2][0] != 43
		&& argv[2][0] != 45 && argv[2][0] != 42) || argv[2][1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	if ((*argv[2] == '/' || *argv[2] == '%') && *argv[3] == 0)
	{
		printf("Error\n");
		exit(100);
	}

	a = atoi(argv[1]);
	b = atoi(argv[3]);

	printf("%d\n", ((*get_op_func(argv[2]))(a, b)));
	return (0);
}
