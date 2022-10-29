#include "main.h"

/**
 * _strlen - A function that returns the length of a string
 * @s: string
 * Return: always o
 */

int _strlen(char *s)
{
	int count = 0;

	while (*(s + count) != '\0')
		count++;
	return (count);
}
