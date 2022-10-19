#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	long int d;
	long long int c;
	char e;
	float f;

	printf("Size of a char: %1u byte(s)\n", (unsigned long)sizeof(i));
	printf("Size of an int: %1u byte(s)\n", (unsigned long)sizeof(d));
	printf("Size of a long int: %1u byte(s)\n", (unsigned long)sizeof(c));
	printf("Size of a long long int: %1u byte(s)\n", (unsigned long)sizeof(e));
	print("Sizze of a float: %1u byte(s)\n", (unsigned long)sizeof(f));
	return (0);
}	
