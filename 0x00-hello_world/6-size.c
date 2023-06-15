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


printf("Size of char: %lu byte(s)\n", (unsigned int)sizeof(a));
printf("Size of int: %lu byte(s)\n", (unsigned int)sizeof(b));
printf("size of long int: %lu byte(s)\n", (unsigned int)sizeof(c));
printf("size of long long int: %lu byte(s)\n", (unsigned int)sizeof(d));
printf("size of float: %lu byte(s)\n", (unsigned int)sizeof(f));
return (0);
}
