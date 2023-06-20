#include "main.h"

/**
 * print_alphabet_x10 - print alphabet 10 times
 * main a program that prints the alphabet 10 times
 * return: 0(compiles successfully)
 */

void print_alphabet_x10(void)
{
	int i;
	char letter;

	for (i = 0; i < 10; i++)
	{
		for (letter = 'a'; letter <= 'z'; letter++)
		{
			_putchar(letter);
		}
		_putchar('\n');
	}
}
