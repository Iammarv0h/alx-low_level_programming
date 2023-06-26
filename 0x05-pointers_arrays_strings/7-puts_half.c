#include "main.h"

/**
 * puts_half - Prints the second half of a string
 * @str: Pointer to the string
 */
void puts_half(char *str)
{
	int m, start;
	int length = 0;

	while (str[length] != '\0')
		length++;
	if (length % 2 == 0)
		start = length / 2;
	else
		start = (length + 1) / 2;
	for (m = start; m < length; m++)
		_putchar(str[m]);
	_putchar('\n');
}
