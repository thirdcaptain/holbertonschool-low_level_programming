#include "holberton.h"
#include "2-strlen.c"

/**
 * append_text_to_file - appends text to end of file
 * @filename: the file to append text to
 * @text_content: text to append
 *
 * Return: 1 on success, -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	int write_value, length;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_APPEND | O_RDWR);
	if (fd == -1)
		return (-1);

	if (text_content == NULL)
		return (1);

	length = _strlen(text_content);
	write_value = write(fd, text_content, length);
	if (write_value == -1)
		return (-1);

	close(fd);
	return (1);

}
