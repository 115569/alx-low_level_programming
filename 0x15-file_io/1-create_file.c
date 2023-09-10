#include "main.h"

/**
 * _strlen - calculates the length of a string
 * @s: input string
 * Return: length of the string (Success)
 */
int _strlen(char *s)
{
	int len = 0;

	while (s[len] != '\0')
	{
		len++;
	}

	return (len);
}

/**
 * create_file - creates a file with read and write permissions
 * @filename: file to be created
 * @text_content: text content to write to the file
 * Return: 1 (Success), -1 (Error), empty file (NULL)
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	unsigned int length;
	ssize_t bytes_wr;

	if (filename == NULL)
	return (-1);
	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd == -1)
	return (-1);

	if (text_content == NULL)
	{
	length = 0;
	text_content = "";
	}
	else
	length = _strlen(text_content);

	bytes_wr = write(fd, text_content, length);
	if (bytes_wr == -1)
	return (-1);
	close(fd);
	return (1);
}
