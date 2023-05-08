#include "main.h"

/*
 * this function reads a text file and and
 * prints it to the POSIX standard output
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fd, read_fd, write_fd;
	char *buffer;

	if (filename == NULL)
		return (0);

	buffer = (char *) calloc(letters, sizeof(letters));
	if (buffer == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	read_fd  = read(o, buffer, letters);
	write_fd = write(STDOUT_FILENO, buffer, r);

	if (fd == -1 || read_fd == -1 || write_fd == -1 || write_fd != read_fd)
	{
		free(buffer);
		return (0);
	}

	free(buffer);
	close(fd);

	return (write_fd);
}

