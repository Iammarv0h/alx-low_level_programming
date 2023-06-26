#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - generates random passwords
 *
 * Return: 0(compiled succesfully)
 */
int main(void)
{
	int m = 0, i = 0;
	time_t t;

	srand((unsigned int)time(&t));

	while (i < 2772)
	{
		m = rand() % 128;
		if ((i + m) > 2772)
			break;
		i = i + m;
		printf("%c", m);
	}

	printf("%c\n", (2772 - i));

	return (0);
}
