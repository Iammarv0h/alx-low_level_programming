#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	unsigned long long fib1, fib2, fib_next;
	int count;

	fib1 = 1;    /* First Fibonacci number */
	fib2 = 2;    /* Second Fibonacci number */

	printf("%llu, %llu", fib1, fib2);  /* Print the first two numbers */
	for (count = 3; count <= 98; count++)
	{
		fib_next = fib1 + fib2;
		printf(", %llu", fib_next);
		fib1 = fib2;
		fib2 = fib_next;
	}
	printf("\n");
	return (0);
}
