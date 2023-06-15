#include <unistd.h>
/**
 * main - a program that prints without using printf and puts
 * Return: 1(this shows an error in the code)
 */
int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
