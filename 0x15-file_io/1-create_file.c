#include "main.h"

/**
 * create_file - create a file.
 * @filename: it s a file name.
 * @text_content: content writed in the file.
 * Return: 1 on success, -1 otherwise.
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	int len;
	int Wr;

	if (!filename)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);

	if (!text_content)
		text_content = "";

	for (len = 0; text_content[len]; len++)
		;

	Wr = write(fd, text_content, len);
	if (Wr == -1)
		return (-1);

	close(fd);
	return (1);
}
