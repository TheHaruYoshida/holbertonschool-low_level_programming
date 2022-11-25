#include "main.h"

/**
  * create_file - create a file.
  * @filename: the name of the file to create.
  * @text_content: NULL terminated string to write to the file.
  *
  * Return: 1 on success or -1 on failure.
  */

int create_file(const char *filename, char *text_content)
{
	int fd, wr;

	if (!filename)
		return (-1);
	fd = open(filename, O_CREAT | O_WRONLY | O_EXCL, 0600);
	if (errno == EEXIST)
	{
		close(fd);
		fd = open(filename, O_WRONLY | O_TRUNC);
	}
	else if (fd == -1)
		return (-1);
	if (!text_content)
		return (1);
	wr = write(fd, text_content, strlen(text_content));
	if (wr == -1)
		return (-1);
	close(fd);
	return (1);
}
