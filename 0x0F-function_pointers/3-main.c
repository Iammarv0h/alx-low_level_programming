#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * handle_error - Handle errors and exit the program with the given status
 * @status: The exit status
 * @message: The error message to print
 */
void handle_error(int status, const char *message)
{
	printf("%s\n", message);
	exit(status);
}

/**
 * main - Print results of the operation
 * @argc: The number of arguments
 * @argv: Array of pointers to args
 * Return: Always 0
 */
int main(int __attribute__((__unused__)) argc, char *argv[])
{
	int n1, n2, result;
	char *op;

	if (argc != 4)
		handle_error(98, "Error");

	n1 = atoi(argv[1]);
	n2 = atoi(argv[3]);
	op = argv[2];

	if (get_op_func(op) == NULL || op[1] != '\0')
		handle_error(99, "Error");

	if ((*op == '%' || *op == '/') && n2 == 0)
		handle_error(100, "Error");

	result = get_op_func(op)(n1, n2);
	printf("%d\n", result);

	return (0);
}
