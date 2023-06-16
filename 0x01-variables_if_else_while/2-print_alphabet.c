#include <stdio.h>
/**
 * main - The program starts here
 * Return: 0(compiled successfully)
 */

int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		putchar(letter);
	}
	putchar('\n');
	return (0);
}
