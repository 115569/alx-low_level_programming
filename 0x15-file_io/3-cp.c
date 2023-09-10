#include "main.h"

#define READ_ERR "Error: Can't read from file %s\n"
#define WRITE_ERR "Error: Can't write to %s\n"

/**
 * main - copies content of one file to another
 * @argc: number of arguments
 * @argv: argument array
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int file_from, file_to, err_close;
	ssize_t nchars, nwr;
	char buff[1024];

	if (argc != 3)
	{
	dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
	exit(97);
	}

	file_from = open(argv[1], O_RDONLY);
	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	error_file(file_from, file_to, argv);

	nchars = 1024;
	while (nchars == 1024)
	{
	nchars = read(file_from, buff, 1024);
	if (nchars == -1)
	error_file(-1, 0, argv);
	nwr = write(file_to, buff, nchars);
	if (nwr == -1)
	error_file(0, -1, argv);
	}

	err_close = close(file_from);
	if (err_close == -1)
	{
	dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
	exit(100);
	}

	err_close = close(file_to);
	if (err_close == -1)
	{
	dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
	exit(100);
	}
	return (0);
}

/**
 * error_file - handles open file errors
 * @file_from: source file
 * @file_to: destination file
 * @argv: argument vector
 * Return: void
 */
void error_file(int file_from, int file_to, char *argv[])
{
	if (file_from == -1)
	{
	dprintf(STDERR_FILENO, READ_ERR, argv[1]);
	exit(98);
	}
	if (file_to == -1)
	{
	dprintf(STDERR_FILENO, WRITE_ERR, argv[2]);
	exit(99);
	}
}