#include <stdio.h>

/**
 * main - this is the entry point
 * Return: 0(program compiled successful)
 */

int main(void)
{
	int d;

	for (d = '0'; d <= '9'; d++)
	{
		putchar(d);
	}
	if (d != '9')
	{
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);

}
