#include "main.h"

/**
 * append_text_to_file - append text at the end of a file.
 * @filename: file name.
 * @text_content: added text.
 * Return: 1 on success and -1 otherwise.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	int len;
	int RdWr;

	if (!filename)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);

	if (fd == -1)
		return (-1);
	
	for (len = 0; text_content[len]; len++)
		;

	if (len)
		RdWr = write(file, text_content, len);

	if (RdWr == -1)
		return (-1);

	close(fd);
	return (1);
}
