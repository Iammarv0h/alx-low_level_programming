#include "main.h"
#include <stdlib.h>
/**
 * print_last_digit - prints the last digit of a number
 * @number: the number that will be printed or sth
 * Return: the value of the last digit
 */
int print_last_digit(int number)
{
	int last_digit = abs(number) % 10;

	_putchar('0' + last_digit);
	return (last_digit);
}
