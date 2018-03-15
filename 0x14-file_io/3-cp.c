#include "holberton.h"

/**
 * copy_text - copies text
 * @fd_src: source file desciption
 * @fd_dest: destination file description
 * @file1: name of source file
 * @file2: name of dest file
 */

void copy_text(int fd_src, int fd_dest, char *file1, char *file2)
{
	int read_ret, write_ret;
	char buf[1024];

	do {
		read_ret = read(fd_src, buf, 1024);
		if (read_ret == -1)
		{
		dprintf(STDERR_FILENO,
			"Error: Can't read from file %s\n", file1);
		exit(98);
		}
		write_ret = write(fd_dest, buf, read_ret);
		if (write_ret == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", file2);
		exit(99);
		}
	} while (write_ret == 1024);

}

/**
 * main - copies the content of a file to another file
 * @argc:count of arguments
 * @argv:argument
 *
 * Return:0 on success, 97 - 100 if error
 */

int main(int argc, char *argv[])
{
	int fd_from, fd_to, close_to_ret, close_from_ret;
	char *filename1, *filename2;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		return (97);
	}
	filename1 = argv[1];
	filename2 = argv[2];
	fd_from = open(argv[1], O_RDONLY);
	if (fd_from == -1)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't read from file %s\n", argv[1]);
		return (98);
	}
	fd_to = open(argv[2], O_CREAT | O_TRUNC | O_WRONLY, 0664);
	if (fd_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		return (99);
	}
	copy_text(fd_from, fd_to, filename1, filename2);
	close_from_ret = close(fd_from);
	if (close_from_ret == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd: %d", fd_from);
		return (100);
	}
	close_to_ret = close(fd_to);
	if (close_to_ret == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd: %d", fd_to);
		return (100);
	}
	return (0);
}
