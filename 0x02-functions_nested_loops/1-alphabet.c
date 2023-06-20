#include "main.h"

/**
 * print_alphabet - mke the alphabet letters
 * main - a program  tha prints the alphabet
 * Return: 0(compiled successfully)
 */
void print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		_putchar(letter);
	}
	_putchar('\n');
}
