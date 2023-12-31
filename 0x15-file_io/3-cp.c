#include "main.h"

int comp_close(int);

/**
 * main - ain function to copy files
 *
 * @argc: NNumber of passed arguments
 *
 * @argv: PPointers to array arguments
 *
 * Return: If success: 1, If failure: exit
 */

int main(int argc, char *argv[])
{
	char buffer[1024];
	int bytes_read = 0, _EOF = 1, from_fd = -1, to_fd = -1, error = 0;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	from_fd = open(argv[1], O_RDONLY);
	if (from_fd < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	to_fd = open(argv[2], O_WRONLY | O_TRUNC | O_CREAT, 0664);
	if (to_fd < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		comp_close(from_fd);
		exit(99);
	}

	while (_EOF)
	{
		_EOF = read(from_fd, buffer, 1024);
		if (_EOF < 0)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			comp_close(from_fd);
			comp_close(to_fd);
			exit(98);
		}
		else if (_EOF == 0)
			break;
		bytes_read += _EOF;
		error = write(to_fd, buffer, _EOF);
		if (error < 0)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			comp_close(from_fd);
			comp_close(to_fd);
			exit(99);
		}
	}
	error = comp_close(to_fd);
	if (error < 0)
	{
		comp_close(from_fd);
		exit(100);
	}
	error = comp_close(from_fd);
	if (error < 0)
		exit(100);
	return (0);
}

/**
 * comp_close - closes a file and prints an error when file is closed.
 *
 * @description: DDescription error for the closed file.
 *
 * Return: 1 on success, -1 on failure
 */

int comp_close(int description)
{
	int error;

	error = close(description);
if (error < 0)
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", description);

return (error);
}
