#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - a function that adds positive numbers.
 * @argc: number of command line arguments.
 * @argv: array that contains the program arguments.
 * Return: 0 - success.
 */

int main(int argc, char *argv[])
{
	int i, k, add = 0;

	for (i = 1; i < argc; i++)
	{
		for (k = 0; argv[i][k] != '\0'; j++)
		{
			if (!isdigit(argv[i][k]))
			{
				printf("Error\n");
				return (1);
			}
		}
		add += atoi(argv[i]);
	}
	printf("%d\n", add);
	return (0);
}
