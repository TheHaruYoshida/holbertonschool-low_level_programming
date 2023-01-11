#include "search_algos.h"

/**
  * print_array - it prints an array
  * @array: the array itself
  * @low: the first element to print
  * @high: the last element to print
  *
  */

void print_array(int *array, size_t low, size_t high)
{
	size_t i = low;

	printf("Searching in array: ");
	while (i <= high)
	{
		printf("%d", array[i]);
		if (i != high)
			printf(", ");
		else
			printf("\n");
		i++;
	}
}

/**
  * binary_search - it searches a value in a sorted array
  * @array: a pointer to the first element of the array
  * @size: the number of elements in the array
  * @value: the value to search
  *
  * Return: the index of the value, or -1 if fails
  */

int binary_search(int *array, size_t size, int value)
{
	size_t low = 0, high = size - 1, mid;

	if (!array)
		return (-1);
	print_array(array, low, high);
	while (low <= high)
	{
		mid = (low + high) / 2;
		if (array[mid] < value)
			low = mid + 1;
		else if (array[mid] > value)
			high = mid - 1;
		else
			return (mid);
		if (low <= high)
			print_array(array, low, high);
	}
	return (-1);
}
