#include <stdio.h>

/**
 * main - Prints the first 50 Fibonacci numbers
 *
 * Return: Always 0
 */
int main(void)
{
    int term1 = 1, term2 = 2, temp;
    int count;

    // Print the first two terms
    putchar('1');
    putchar(',');
    putchar(' ');
    putchar('2');

    for (count = 3; count <= 50; count++)
    {
        temp = term1 + term2;

        // Print the current term
        putchar(',');
        putchar(' ');
        print_number(temp);

        term1 = term2;
        term2 = temp;
    }

    // Print a newline character
    putchar('\n');

    return 0;
}

/**
 * print_number - Prints a number to the standard output
 *
 * @num: The number to print
 */
void print_number(int num)
{
    if (num == 0)
    {
        putchar('0');
        return;
    }

    if (num < 0)
    {
        putchar('-');
        num = -num;
    }

    if (num / 10)
        print_number(num / 10);

    putchar((num % 10) + '0');
}

