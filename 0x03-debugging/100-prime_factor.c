#include <stdio.h>

/**
 * largest_prime_factor - Finds the largest prime factor of a number
 * @n: The number
 *
 * Return: The largest prime factor
 */
long largest_prime_factor(long n)
{
	long factor = 2;
	while (factor <= n)
	{
		if (n % factor == 0)
		{
			n /= factor;
		}
		else
		{
			factor++;
		}
	}
	return factor;
}

int main(void)
{
	long number = 612852475143;
	long largest_factor = largest_prime_factor(number);
	printf("%ld\n", largest_factor);
	return (0);
}
