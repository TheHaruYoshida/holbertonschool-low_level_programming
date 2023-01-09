#include "search_algos.h"
/**
 * linear_search - seaches for a value in an array
 * @array: array of integers
 * @size: size of the array
 * @value: value that is needed to search
 *
 * Return: the index of the value searched if success or -1 if fail.
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;

	if (!array)
		return(-1);
	while(i < size)
	{
		printf("Value checked [%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
		i++;
	}
	return (-1);
}
