#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * generate_keygen - Generates a keygen.
 *
 * Return: The generated keygen string.
 */
char *generate_keygen(void)
{
	int total = 2772;
	char *keygen = malloc(total + 1); /* Allocate memory for the keygen string*/
	int i;

	srand(time(NULL));
	for (i = 0; i < total; i++)
	{
		keygen[i] = rand() % 128; /* Generate random ASCII characters*/
	}
	keygen[total] = '\0'; /* Add null terminator at the end of the string*/
	return (keygen);
}

/**
 * main - Entry point. Generates and prints a keygen.
 *
 * Return: Always 0.
 */
int main(void)
{
	char *keygen = generate_keygen();

	printf("%s\n", keygen);
	free(keygen); /*Free the allocated memory*/
	return (0);
}
