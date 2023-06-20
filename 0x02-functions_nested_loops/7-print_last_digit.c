#include "main.h"
/**
 * print_last_digit - prints the last digit of a number
 * @n: the number
 * Return: the value of the last digit
 */
int print_last_digit(int n)
{
	int last_digit;

	if (n < 0)
		n = -n;  /* Convert negative number to positive */
	last_digit = n % 10;
	_putchar('0' + last_digit);  /* Print the last digit as a character */
	return (last_digit);
}
