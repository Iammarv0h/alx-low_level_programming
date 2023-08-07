#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

/**
 * print_error - Prints error messages and exits with status code.
 * @message: The error message to print.
 * @filename: The name of the file related to the error.
 * @exit_code: The exit code to use.
 */
void print_error(const char *message, const char *filename, int exit_code)
{
	dprintf(STDERR_FILENO, message, filename);
	exit(exit_code);
}

/**
 * main - Copies content from one file to another.
 * @argc: The number of command-line arguments.
 * @argv: The array of command-line arguments.
 * Return: 0 on success, otherwise exit codes for errors.
 */
int main(int argc, char *argv[])
{
	int file_from, file_to;
	ssize_t nchars, nwr;
	char buf[1024];

	if (argc != 3)
		print_error("Usage: cp file_from file_to\n", "", 97);

	file_from = open(argv[1], O_RDONLY);
	if (file_from == -1)
		print_error("Error: Can't read from file %s\n", argv[1], 98);

	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (file_to == -1)
		print_error("Error: Can't write to %s\n", argv[2], 99);

	while ((nchars = read(file_from, buf, sizeof(buf))) > 0)
	{
		nwr = write(file_to, buf, nchars);
		if (nwr == -1)
			print_error("Error: Can't write to %s\n", argv[2], 99);
	}

	if (nchars == -1)
		print_error("Error: Can't read from file %s\n", argv[1], 98);

	if (close(file_from) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);

	if (close(file_to) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_to);

	return (0);
}
