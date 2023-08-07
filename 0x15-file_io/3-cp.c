#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include "main.h"

/**
 * print_error - Print an error message to stderr and exit.
 * @message: The error message.
 * @exit_code: The exit code.
 */
void print_error(const char *message, int exit_code)
{
	dprintf(STDERR_FILENO, "%s\n", message);
	exit(exit_code);
}

/**
 * copy_file - Copy the content from source to destination.
 * @fd_from: Source file descriptor.
 * @fd_to: Destination file descriptor.
 */
void copy_file(int fd_from, int fd_to)
{
	close(fd_from);
	close(fd_to);
}

/**
 * main - Entry point for the cp program.
 * @argc: The number of command-line arguments.
 * @argv: An array containing the command-line arguments.
 *
 * Return: 0 on success, or an exit code on failure.
 */
int main(int argc, char *argv[])
{
	int fd_from, fd_to;

	if (argc != 3)
		print_error("Usage: cp file_from file_to", 97);
	fd_from = open(argv[1], O_RDONLY);
	if (fd_from == -1)
		print_error("Error: Can't read from file", 98);

	fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd_to == -1)
		print_error("Error: Can't write to", 99);

	copy_file(fd_from, fd_to);
	return (0);
}
