#include <stdio.h>
/**
 * main - a program that prints the first 50 fib numbers
 * Return: 0(compiled succesfully)
 */

int main(void) {
    int count;
    unsigned long long fib1 = 1, fib2 = 2;

    printf("%llu, %llu", fib1, fib2); // Print the first two numbers

    for (count = 3; count <= 50; count++) {
        unsigned long long fib_next = fib1 + fib2;
        printf(", %llu", fib_next);

        fib1 = fib2;
        fib2 = fib_next;
    }

    printf("\n");

    return (0);
}

