#include "main.h"
#include <stdlib.h>
/**
 **array_range - function
 *@min: initial number
 *@max: stop number
 *Return: int
 */
int *array_range(int min, int max)
{
	int *v = NULL;
	int i = 0;

	if (min > max)
		return (NULL);
	max = max - min + 1;
	v = malloc(max * sizeof(*v));
	if (!v)
		return (NULL);
	for (i = 0; i < max; i++)
	{
		v[i] = min;
		min++;
	}
	return (v);
}
