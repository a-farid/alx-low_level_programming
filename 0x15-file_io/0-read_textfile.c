#include "main.h"

/**
 * read_textfile - read a text file and print the letters.
 * @filename: filename.
 * @letters: number of letters printed.
 * Return:  the actual number of letters it could read and print,
 *    if it fails return 0.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t Read, Write;
	char *buffer;

	if (!filename || !letters)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buffer = malloc(sizeof(char) * (letters));
	if (!buffer)
		return (0);

	Read = read(fd, buffer, letters);
	Write = write(STDOUT_FILENO, buffer, Read);

	close(fd);
	free(buffer);
	return (Write);
}
