#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

char *use_buffer(char *file);
void close_file(int fd);

/**
 * use_buffer - Takes 1024 bytes for buffer
 * @file: buffer file
 *
 * Return: pointer to newly allocated buffer
 */
char *use_buffer(char *file)
{
	char *buffer;

	buffer = malloc(sizeof(char) * 1024);

	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO, "Error: can't write to %s\n", file);
		exit(99);
	}
	return (buffer);
}

/**
 * close_file - Closes file descriptors depending on error
 * @fd: file descriptor to close
 *
 * Return: nothing
 */
void close_file(int fd)
{
	int fd_closer;

	fd_closer = close(fd);

	if (fd_closer == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
	exit(100);
}

/**
 * main - copies contents from file_from to file_to
 * @argc: number of args to fxn
 * @argv: array of pointers to the args
 *
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	int file_from, file_to, read_bytes, write_bytes;
	char *buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buffer = use_buffer(argv[2]);
	file_from = open(argv[1], O_RDONLY);
	read_bytes = read(file_from, buffer, 1024);
	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (file_from == -1 || read_bytes == -1)
		{
			dprintf(STDERR_FILENO, "Error:Cant't read from file %s\n", argv[1]);
			free(buffer);
			exit(98);
		}

		write_bytes = write(file_to, buffer, read_bytes);
		if (file_to == -1 || write_bytes == -1)
		{
			dprintf(STDERR_FILENO, "Error: Cant't write to %s\n", argv[2]);
			free(buffer);
			exit(99);
		}

		read_bytes = read(file_from, buffer, 1024);
		file_to = open(argv[2], O_WRONLY | O_APPEND);
	} while (read_bytes > 0);

	free(buffer);
	close_file(file_from);
	close_file(file_to);

	return (0);
}
