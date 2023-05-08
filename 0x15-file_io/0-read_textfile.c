#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: name of the file to read
 * @letters: number of letters it should read and print
 * Return: actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t n_read, n_written;
	char *buffer;

	fd = open(filename, O_RDONLY);
	if (!filename || fd == -1)
		return (0);

	n_read = read(fd, buffer, letters);
	buffer = malloc(sizeof(char) * letters);
	if (!buffer || n_read == -1)
		return (0);

	n_written = write(STDOUT_FILENO, buffer, n_read);
	free(buffer);
	close(fd);

	return ((n_written == -1 || n_written != n_read) ? 0 : n_written);
}
