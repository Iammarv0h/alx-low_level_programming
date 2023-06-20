#include <stdio.h>

/**
 * main - Prints the first 98 Fibonacci numbers
 *
 * Return: Always 0
 */
int main(void)
{
    int count;
    unsigned long int fib1 = 1, fib2 = 2, fib_sum;

    putchar('1');
    putchar(',');
    putchar(' ');

    putchar('2');
    putchar(',');
    putchar(' ');

    for (count = 2; count < 98; count++)
    {
        fib_sum = fib1 + fib2;

        unsigned long int divisor = 1000000000; 

        /* Find the highest non-zero digit in fib_sum */
        while (divisor > fib_sum)
            divisor /= 10;

        /* Print each digit of fib_sum */
        while (divisor != 0)
        {
            unsigned long int digit = fib_sum / divisor;
            fib_sum %= divisor;
            divisor /= 10;
            putchar(digit + '0');
        }

        if (count != 97) {
            putchar(',');
            putchar(' ');
        }

        fib1 = fib2;
        fib2 = fib_sum;
    }

    putchar('\n');

    return 0;
}

