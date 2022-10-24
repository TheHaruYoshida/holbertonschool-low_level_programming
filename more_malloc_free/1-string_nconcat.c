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
	char *s3 = NULL;
	unsigned int i;
	unsigned int size;
	unsigned int size2;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (size = 0; s1[size] != '\0'; size++)
	{
	}
	for (size2 = 0; s2[size2] != '\0'; size2++)
	{
	}
	if (size2 > n)
		size2 = n;
	s3 = malloc((size + size2 + 1) * sizeof(char));
	if (s3 == NULL)
		return (NULL);
	for (i = 0; i < size + size2; i++)
	{
		if (i < size)
			s3[i] = s1[i];
		else
			s3[i] = s2[i - size];
	}
	s3[i] = '\0';
	return (s3);
}
