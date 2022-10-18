#include "main.h"

/**
  *
  *
  *
  */
int main(__attribute__((unused)) int argc, char **argv)
{
	int i = 0;
	int j = 1;

	if (argc < 3)
	{
		printf("Error\n");
		return(0);
	}
	for (i = 1; i <3; i++)
		j *= atoi(argv[i]);
	printf("%d\n", j);
	return(0);
}
