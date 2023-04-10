#include <stdio.h>

/**
 * main - prints all arguments of argV.
 * @argc: number of command line arguments.
 * @argv: array that contains the program  arguments.
 * Return: 0 - success.
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
