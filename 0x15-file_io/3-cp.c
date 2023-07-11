#include "main.h"

/**
 * file_err - check if file can be opened.
 * @f_from: f_from.
 * @f_to: f_to.
 * @argv: argument vector.
 * Return: no return.
 */
void file_err(int from, int to, char *argv[])
{
	if (from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
}

/**
 * main - check the code for ALX SE.
 * @argc: number of arguments.
 * @argv: argument array.
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int f_from, f_to, err_close;
	ssize_t len, nwr;
	char buf[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp f_from f_to");
		exit(97);
	}

	f_from = open(argv[1], O_RDONLY);
	f_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	file_err(f_from, f_to, argv);

	len = 1024;
	while (len == 1024)
	{
		len = read(f_from, buf, 1024);
		if (len == -1)
			file_err(-1, 0, argv);
		nwr = write(f_to, buf, len);
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
