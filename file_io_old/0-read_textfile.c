#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <stddef.h>
/**
 * read_textfile - fxn that reads a text file and prints it to pOSIX stdout
 * @filename: pointer to textfile
 * @letters: number of letters it should read and print
 *
 * Return: 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	ssize_t fd;
	ssize_t read_bytes;
	ssize_t write_bytes;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	read_bytes = read(fd, buffer, letters);
	write_bytes = write(STDOUT_FILENO, buffer, read_bytes);

	free(buffer);
	close(fd);
	return (write_bytes);
}
