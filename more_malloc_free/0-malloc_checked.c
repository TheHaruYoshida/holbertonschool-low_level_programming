#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - allocates memory using malloc.
 * @b: bytes.
 * Return: array
 */
void *malloc_checked(unsigned int b)

{
	void *v;

	v = malloc(b);
	if (v == NULL)
		exit(98);
	return (v);
}
