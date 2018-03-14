#include "holberton.h"
#include "2-strlen.c"

/**
 * create_file - creates a file
 * @filename: name of the file to create
 * @text_content: text to put into file
 *
 * Return: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{

	int fd;
	int write_value, length;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);

	if (text_content == NULL)
		text_content = "";

	length = _strlen(text_content);
	write_value = write(fd, text_content, length);
	if (write_value == -1)
		return (-1);

	close(fd);
 	return (1);
}
