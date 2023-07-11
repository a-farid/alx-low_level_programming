#include "main.h"

/**
 * file_err - check if file can be opened.
 * @f_from: f_from.
 * @f_to: f_to.
 * @argv: argument vector.
 * Return: no return.
 */
void file_err(int f_from, int f_to, char *argv[])
{
	if (f_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (f_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
}

/**
 * main - check the code for SE ALX program.
 * @argc: number of arguments.
 * @argv: argument vector.
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int f_from, f_to, err_close;
	ssize_t nchars, nwr;
	char buf[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp f_from f_to");
		exit(97);
	}

	f_from = open(argv[1], O_RDONLY);
	f_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	file_err(f_from, f_to, argv);

	nchars = 1024;
	while (nchars == 1024)
	{
		nchars = read(f_from, buf, 1024);
		if (nchars == -1)
			file_err(-1, 0, argv);
		nwr = write(f_to, buf, nchars);
		if (nwr == -1)
			file_err(0, -1, argv);
	}

	err_close = close(f_from);
	if (err_close == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", f_from);
		exit(100);
	}

	err_close = close(f_to);
	if (err_close == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", f_from);
		exit(100);
	}
	return (0);
}
