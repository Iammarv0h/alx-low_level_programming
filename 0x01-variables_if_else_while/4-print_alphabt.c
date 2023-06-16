#include <stdio.h>
/**
 * main - entry point
 * Return: 0(compiled successfully)
 */
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		if (letter != 'q' && letter != 'e')
	{
		putchar(letter);
	}
	}
	putchar('\n');
	return (0);
}
