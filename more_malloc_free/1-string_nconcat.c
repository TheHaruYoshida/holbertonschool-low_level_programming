#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * string_nconcat - concatenates two strings.
 * @s1: string 1.
 * @s2: string 2.
 * @n: amount.
 * Return: array
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *v;
	unsigned int size1,  size2, i, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	size1 = strlen(s1);
	size2 = strlen(s2);
	if (n > size2)
		n = size2;

	v = malloc((size1 + size2) * sizeof(char));
	if (v == NULL)
		return (NULL);

	for (i = 0; i < size1; i++)
		v[i] = s1[i];
	for (j = 0; j < n; j++)
	{
		v[i] = s2[j];
		i++;
	}
	v[i] = '\0';
	return (v);
}
