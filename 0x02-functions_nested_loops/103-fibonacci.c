#include <stdio.h>

/**
 * main - Calculates the sum of even-valued terms in the Fibonacci sequence
 *        up to 4,000,000
 *
 * Return: Always 0
 */
int main(void)
{
	int term1 = 1, term2 = 2, temp;

	int sum = 2; /* Start with the sum as 2 since the second term is even */

	while (term2 <= 4000000)
	{
		temp = term2;
		term2 += term1;
		term1 = temp;
		if (term2 % 2 == 0)
			sum += term2;
	}

	putchar(sum / 1000000 + '0');
	putchar(sum / 100000 % 10 + '0');
	putchar(sum / 10000 % 10 + '0');
	putchar(sum / 1000 % 10 + '0');
	putchar(sum / 100 % 10 + '0');
	putchar(sum / 10 % 10 + '0');
	putchar(sum % 10 + '0');
	putchar('\n');
	return (0);
}
