#include "main.h"

/**
 * read_textfile - Function that reads a Text file and prints the Letters..
 *
 * @filename:The filename.
 *
 * @letters: The nmbr of letters printed.
 *
 * Return: Success = numbers of letters printed. fail = 0.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t nrd, nwr;
	char *buf;

	if (!filename)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	buf = malloc(sizeof(char) * (letters));
	if (!buf)
		return (0);

	nrd = read(fd, buf, letters);
	nwr = write(STDOUT_FILENO, buf, nrd);

	close(fd);

	free(buf);

	return (nwr);
}
