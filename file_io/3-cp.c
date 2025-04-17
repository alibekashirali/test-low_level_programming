#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

/**
 * main - Copies content from one file to another
 * @argc: The number of command line arguments
 * @argv: The command line arguments
 *
 * Return: 0 on success, exits with a specific code on failure
 */
int main(int argc, char *argv[])
{
	int fd_from, fd_to, read_bytes, written_bytes;
	char buffer[1024];

	if (argc != 3)
	{
		dprintf(2, "Usage: cp file_from file_to\n");
		exit(97);
	}

	fd_from = open(argv[1], O_RDONLY);
	if (fd_from == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd_to == -1)
	{
		dprintf(2, "Error: Can't write to file %s\n", argv[2]);
		exit(99);
	}

	while ((read_bytes = read(fd_from, buffer, 1024)) > 0)
	{
		written_bytes = write(fd_to, buffer, read_bytes);
		if (written_bytes == -1)
		{
			dprintf(2, "Error: Can't write to file %s\n", argv[2]);
			exit(99);
		}
	}

	if (read_bytes == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	if (close(fd_from) == -1)
	{
		dprintf(2, "Error: Can't close fd %d\n", fd_from);
		exit(100);
	}

	if (close(fd_to) == -1)
	{
		dprintf(2, "Error: Can't close fd %d\n", fd_to);
		exit(100);
	}

	return (0);
}
