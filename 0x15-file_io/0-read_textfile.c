#include "main.h"

/**
 * read_textfile - Reads a text file and prints characters to stdout.
 * @filename: The name of the file to read.
 * @letters: The number of characters to read.
 * Return: The actual number of characters read and printed, or 0 on failure.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buff;
	ssize_t bytes_rd, bytes_wr;

	if (filename == NULL)
	{
	return (0);
	}
	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
	perror("open");
	return (0);
	}
	buff = malloc(sizeof(char) * letters + 1);
	if (buff == NULL)
	{
	perror("malloc");
	close(fd);
	return (0);
	}
	bytes_rd = read(fd, buff, letters);
	if (bytes_rd == -1)
	{
	perror("read");
	free(buff);
	close(fd);
	return (0);
	}
	buff[letters] = '\0';
	close(fd);
	bytes_wr = write(STDOUT_FILENO, buff, bytes_rd);
	if (bytes_wr == -1)
	{
	perror("write");
	free(buff);
	return (0);
	}
	free(buff);
	return (bytes_rd);
}
