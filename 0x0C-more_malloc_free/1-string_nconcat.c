#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - functn n that concatenates two string.
 * @s1: string one.
 * @s2: string two.
 * @n: amount of bytes.
 *
 * Return: pointer to the allocated memory.
 * if malloc fails, status value is equal to 98.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *kels;
	unsigned int ls1, ls2, kay, i;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (ls1 = 0; s1[ls1] != '\0'; ls1++)
		;

	for (ls2 = 0; s2[ls2] != '\0'; ls2++)
		;

	if (n > ls2)
		n = ls2;

	kay = ls1 + n;

	kay = ls1 + n;

	if (kels == NULL)
		return (NULL);

	for (i = 0; i < kay; i++)
		if (i < ls1)
			kels[i] = s1[i];
		else
			kels[i] = s2[i - ls1];

	kels[i] = '\0';

	return (kels);
}
