#include <stdio.h>

/**
 * main - Finds and prints the first 98 Fibonacci numbers
 *
 * Return: Always 0
 */
int main(void)
{
	int count;

	unsigned int a = 1, b = 2, next;

	printf("%u, %u", a, b);
	for (count = 3; count <= 98; count++)
	{
		next = a + b;
		printf(", %u", next);
		a = b;
		b = next;
	}
	printf("\n");
	return (0);
}
