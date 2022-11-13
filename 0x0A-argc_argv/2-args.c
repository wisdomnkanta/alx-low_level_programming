#include <stdio.h>
/**
 * main - displayss all arguments it recives.
 * @argc: number of program command line arguments
 * @argv: array that contains the program command line arguments
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
