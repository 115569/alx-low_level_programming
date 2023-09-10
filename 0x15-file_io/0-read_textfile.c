#include "main.h"

/**
 * read_textfile - reads a text file and prints characters to stdout
 * @filename: the filename to read
 * @letters: the number of characters to read
 * Return: the number of letters it could read and print, or 0 if failure
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buff;
	ssize_t bytes_rd, bytes_wr;

	if (!filename)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buff = malloc(sizeof(char) * letters + 1);
	if (!buff)
		return (0);

	bytes_rd = read(fd, buff, letters);
	if (bytes_rd == -1)
		return (0);

	buff[letters] = '\0';
	close(fd);

	bytes_wr = write(STDOUT_FILENO, buff, bytes_rd);
	if (bytes_wr == -1)
		return (0);

	free(buff);

	return (bytes_rd);
}
