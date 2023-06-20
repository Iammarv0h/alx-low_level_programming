#include <stdio.h>
/**
 * main - natural numbers below 10
 * Return: 0(cmpiled successfully)
 */

int main(void)
{
	int limit = 1024;

	int sum = 0;

	for (int i = 3; i < limit; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			sum += i;
		}
	}
	printf("%d\n", sum);
	return (0);
}
