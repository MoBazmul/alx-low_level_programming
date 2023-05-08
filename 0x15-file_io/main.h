#ifndef MAIN_H
#define MAIN_H

/* Header files includes */
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <fcntl.h>

/* Functions definition */
int _putchar(char c);
ssize_t read_textfile(const char *filename, size_t letters);

#endif
