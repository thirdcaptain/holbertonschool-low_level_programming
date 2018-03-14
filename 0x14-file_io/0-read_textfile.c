#include "holberton.h"

/**
 * read_textfile - reads a text file and prits to standard output
 * @filename: the file to read
 * @letters: the size of the file
 *
 * Return: the number of letters read/printed, 0 if error
 */

ssize_t read_textfile(const char *filename, size_t letters)
{

	int fd;
	char *buf;
	ssize_t length;

	buf = malloc(sizeof(char) * letters);
	if (buf == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		free(buf);
		return(0);
	}

	length = read(fd, buf, letters);
	buf[letters] = '\0';
	write(STDOUT_FILENO, buf, letters);
	close(fd);
	return(length);
}
