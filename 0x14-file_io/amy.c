#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "holberton.h"
/**
 * copyish - copies file to another new file
 *@file1: name of first file
 *@file2: file to be created
 *Return: none/void
 */
void copyish(char *file_from, char *file_to)
{
	int fd1, fd2, ract, wact;
	char buffer[1024];

	fd1 = open(file_from, O_RDONLY);
	if (fd1 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
		exit(98);
	}
	fd2 = open(file_to, O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (fd2 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
		exit(99);
	}
	while (read()
	{
		ract = read(fd1, buffer, 1024);
		if (ract == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %d", ract);
			exit(98);
		}
		wact = write(fd2, buffer, ract);
		if (wact == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %d", wact);
			exit(99);
		}

	}

	if (close(fd2) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d", fd2);
		exit(100);
	}

	if (close(fd1) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d", fd1);
		exit(100);
	}
}
/**
 *main - copies a file to another file
 *@argc: number of arguments passed to function
 *@argv: array containing arguments
 *Return: 0 on success
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	copyish(argv[1], argv[2]);

	return (0);
}
