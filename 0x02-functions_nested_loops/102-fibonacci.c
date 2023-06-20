#include <stdio.h>
/**
 * main - a function that prints 50 fib numbers
 * Return: 0(compiled sucessfully)
 */
int main(void)
{
	int count;

	unsigned long long a = 1, b = 2, next;

	printf("%llu, %llu", a, b);
	for (count = 3; count <= 50; count++)
	{
		next = a + b;
		printf(", %llu", next);
		a = b;
		b = next;
	}
	printf("\n");
	return (0);
}
