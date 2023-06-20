#include "main.h"

/**
 * print_to_98 - Prints all natural numbers from n to 98
 * @n: The starting number
 */
void print_to_98(int n)
{
    if (n <= 98)
    {
        int i;
        for (i = n; i <= 98; i++)
        {
            if (i != 98)
            {
                if (i < 0)
                {
                    _putchar('-');
                    _putchar(i / 10 * -1 + '0');
                    _putchar(i % 10 * -1 + '0');
                }
                else
                {
                    _putchar(i / 10 + '0');
                    _putchar(i % 10 + '0');
                }
                _putchar(',');
                _putchar(' ');
            }
            else
            {
                _putchar(i / 10 + '0');
                _putchar(i % 10 + '0');
            }
        }
    }
    else
    {
        int i;
        for (i = n; i >= 98; i--)
        {
            if (i != 98)
            {
                if (i < 0)
                {
                    _putchar('-');
                    _putchar(i / 10 * -1 + '0');
                    _putchar(i % 10 * -1 + '0');
                }
                else
                {
                    _putchar(i / 10 + '0');
                    _putchar(i % 10 + '0');
                }
                _putchar(',');
                _putchar(' ');
            }
            else
            {
                _putchar(i / 10 + '0');
                _putchar(i % 10 + '0');
            }
        }
    }
    _putchar('\n');
}

