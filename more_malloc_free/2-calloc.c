#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * *_calloc - function to alocate memory
 * @nmemb: long of array
 * @size: data type
 * Return: void
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *v;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	v = malloc(nmemb * size);
	if (v == NULL)
		return (NULL);
	memset(v, 0, nmemb * size);
	return (v);
}
