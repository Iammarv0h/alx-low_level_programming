#include <stdlib.h>
#include <unistd.h>
#include "main.h"

/**
 * _isdigit - Checks if a character is a digit
 * @c: The character to be checked
 *
 * Return: 1 if c is a digit, 0 otherwise
 */
int _isdigit(int c)
{
	return (c >= '0' && c <= '9');
}

/**
 * _strlen - Computes the length of a string
 * @str: The string
 *
 * Return: The length of the string
 */
int _strlen(char *str)
{
	int len = 0;

	while (str[len])
		len++;

	return (len);
}

/**
 * _multiply - Multiplies two positive numbers represented as strings
 * @num1: The first number
 * @num2: The second number
 * @product: The product string
 *
 * Return: A pointer to the product, or NULL on failure
 */
char *_multiply(char *num1, char *num2, char *product)
{
	int len1, len2, lenProduct, i, j, carry, digit;

	len1 = _strlen(num1);
	len2 = _strlen(num2);
	lenProduct = len1 + len2;

	for (i = 0; i < lenProduct; i++)
		product[i] = '0';
	product[lenProduct] = '\0';

	for (i = len1 - 1; i >= 0; i--)
	{
		carry = 0;
		for (j = len2 - 1; j >= 0; j--)
		{
			digit = (num1[i] - '0') * (num2[j] - '0')
				+ (product[i + j + 1] - '0') + carry;
			carry = digit / 10;
			product[i + j + 1] = (digit % 10) + '0';
		}
		product[i] += carry;
	}

	if (product[0] == '0')
	{
		for (i = 0; i < lenProduct - 1; i++)
			product[i] = product[i + 1];
		product[lenProduct - 1] = '\0';
	}

	return (product);
}

/**
 * _puts - Writes a string to stdout
 * @str: The string to be written
 *
 * Return: On success, returns the number of characters written, otherwise -1
 */
int _puts(char *str)
{
	int len = 0;

	while (str[len])
		len++;

	return (write(1, str, len));
}

/**
 * main - Entry point
 * @argc: The number of command-line arguments
 * @argv: An array of command-line argument strings
 *
 * Return: 0 on success, 98 on error
 */
int main(int argc, char **argv)
{
	char *num1, *num2, *product;
	int i, lenProduct;

	if (argc != 3)
	{
		_puts("Error");
		_putchar('\n');
		return (98);
	} num1 = argv[1];
	num2 = argv[2];
	for (i = 0; num1[i]; i++)
	{
		if (!_isdigit(num1[i]))
		{
			_puts("Error");
			_putchar('\n');
			return (98);
		}
	}
	for (i = 0; num2[i]; i++)
	{
		if (!_isdigit(num2[i]))
		{
			_puts("Error");
			_putchar('\n');
			return (98);
		}
	}
	lenProduct = _strlen(num1) + _strlen(num2) + 1;
	product = malloc(lenProduct * sizeof(char));
	if (product == NULL)
	{
		_puts("Error");
		_putchar('\n');
		return (98);
	} product = _multiply(num1, num2, product);
	_puts(product);
	_putchar('\n');
	free(product);
	return (0);
}
