#include <stdio.h>
/**
 * main - a program that prints the various sizes of computers
 * Return: 0 (shows success of execution of the code)
 */
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float f;


printf("Size of a char: %lu byte(s)\n", (unsigned int)sizeof(a));
printf("Size of an int: %lu byte(s)\n", (unsigned int)sizeof(b));
printf("size of a long int: %lu byte(s)\n", (unsigned int)sizeof(c));
printf("size of a long long int: %lu byte(s)\n", (unsigned int)sizeof(d));
printf("size of a float: %lu byte(s)\n", (unsigned int)sizeof(f));
return (0);
}
