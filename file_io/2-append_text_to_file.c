#include "main.h"

/**
  * append_text_to_file - appends text at the end of a file.
  * @filename: the name of the file.
  * @text_content: NULL terminated string to add at the end of the file.
  *
  * Return: 1 on success or -1 if it fails.
  */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, wr;

	if (!filename)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND);
	if (errno == ENOENT)
		return (-1);
	else if (!text_content)
		return (1);
	if (fd == -1)
		return (-1);
	if (!text_content)
		return (1);
	wr = write(fd, text_content, strlen(text_content));
	if (wr == -1)
		return (-1);
	close(fd);
	return (1);
}
