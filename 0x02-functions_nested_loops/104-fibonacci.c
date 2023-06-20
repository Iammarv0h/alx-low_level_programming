#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0(compiled successfully)
 */
int main(void)
{
	int count, fib1, fib2, fib_next;

	fib1 = 1;    /* First Fibonacci number */
	fib2 = 2;    /* Second Fibonacci number */

	printf("%d, %d", fib1, fib2);  /* Print the first two numbers */

	for (count = 3; count <= 98; count++)
	{
		fib_next = fib1 + fib2;
		printf(", %d", fib_next);

		fib1 = fib2;
		fib2 = fib_next;
	}

	printf("\n");

	return (0);
}
