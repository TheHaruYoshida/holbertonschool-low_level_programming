#include <stdlib.h>
#include <stddef.h>
/**
* array_iterator - executes a function given as a parameter on each element
* @array: The array.
* @size: The size of array.
* @action: A pointer to the function to be executed.
**/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (action && array)
	{
		for (i = 0; i < size; i++)
			action(array[i]);
	}
}
