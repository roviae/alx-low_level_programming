#include "main.h"
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include <string.h>

/**
 * append_text_to_file - fxn that appends text at the end of a file
 * @filename: pointer to file to be appended to
 * @text_content: pointer to string to be appended to filename
 *
 * Return: 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	char fd;
	int len;
	ssize_t written_bytes;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);
	len = (text_content != NULL) ? strlen(text_content) : 0;

	if (len > 0)
	{
		written_bytes = write(fd, text_content, len);
		if (written_bytes == -1)
		{
			close(fd);
			return (-1);
		}
	}

	close(fd);

	return (1);
}
