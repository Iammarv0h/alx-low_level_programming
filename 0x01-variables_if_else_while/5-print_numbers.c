#include <stdio.h>
/**
 * main - starting pont of the program
 * Return: 0(compiled successfully'
 */

int main(void)
{
	int number;

	for (number = 0; number <= 9; number++)
	{
		putchar('0' + number);
	}
	putchar('\n');
	return (0);
}
