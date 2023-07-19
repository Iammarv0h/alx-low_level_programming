#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * print_opcodes - Prints the opcodes of the main function.
 * @main_addr: Address of the main function in memory.
 * @bytes: Number of bytes to print.
 */
void print_opcodes(char *main_addr, int bytes)
{
	int i;

	for (i = 0; i < bytes; i++)
	{
		printf("%.2hhx", main_addr[i]);
		if (i != bytes - 1)
			printf(" ");
	}
	printf("\n");
}

/**
 * main - Entry point of the program.
 * @argc: Number of command-line arguments.
 * @argv: Array of command-line argument strings.
 *
 * Return: Always 0 (Success).
 */
int main(int argc, char **argv)
{
	char *main_addr;
	int bytes;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	bytes = atoi(argv[1]);
	if (bytes < 0)
	{
		printf("Error\n");
		return (2);
	}

	/* Get the address of the main function */
	main_addr = (char *)main;
	/* Print the opcodes of the main function */
	print_opcodes(main_addr, bytes);
	return (0);
}
