#include "main.h"

/**
 * print_array - Prints n elements of an integer array
 * @a: Pointer to the array
 * @n: Number of elements to print
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		int num = a[i];

		if (num < 0)
		{
			_putchar('-');
			num = -num;
		}
		if (num == 0)
		{
			_putchar('0');
		}
		else
		{
			int divisor = 1;

			while (divisor <= num)
				divisor *= 10;
			divisor /= 10;
			while (divisor != 0)
			{
				_putchar('0' + num / divisor);
				num %= divisor;
				divisor /= 10;
			}
		}
		if (i != n - 1)
		{
			_putchar(',');
			_putchar(' ');
		}
	}
	_putchar('\n');
}
