#include <stdio.h>
/**
 * main - a program that prints the various sizes of computers
 * Return: 0 (shows success of execution of the code)
 */
int main(void)
{
	printf("Size of char: %zu byte(s)\n", sizeof(char));
	printf("Size of int: %zu byte(s)\n", sizeof(int));
	printf("size of long int: %zu byte(s)\n", sizeof(long int));
	printf("size of long long int: %zu byte(s)\n" sizeof(long long int));
	printf("size of float: %zu byte(s)\n" sizeof(float));
	return (0);
}
