#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * main - Generates random valid passwords for 101-crackme
 * Return: 0
 */
int main(void)
{
	int password_length = 10;
	char password[11]; /* One extra space for the null terminator*/
	int i;

	srand(time(0)); /*Seed the random number generator with the current time*/
	for (i = 0; i < password_length; i++)
	{
		/*Generate a random ASCII character between 'A' and 'z'*/
		password[i] = (rand() % ('z' - 'A')) + 'A';
	}
	password[password_length] = '\0'; /* Add null terminator at the end*/
	printf("Generated Password: %s\n", password);
	return (0);
}
