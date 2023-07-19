#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - Prints a name using a given function.
 * @name: Name of the person
 * @f: Pointer to the function to be used to print the name.
 *
 * Return: Nothing.
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
