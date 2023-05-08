#include "main.h"

/*
 * this function reads a text file and and
 * prints it to the POSIX standard output
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fd, read_size, write_size;
	char buffer = (char*) calloc(letters, sizeof(char));

	fd = open(filename, O_RDONLY | O_CREAT);
	if ((fd < 0) | (fd == NULL)) {
		perror("r1");
		return (0);
	}
	
	read_size = read(fd, buffer, letters);
	if (read_size == -1) {
		free(buffer);
		return (0);
	}

	write_size = write(STDOUT_FILENO, buffer, read_size);
	if (write_size < 0) {
		free(buffer);
		return (0);
	}
	return (write_size);
	
	close(fd);
}

