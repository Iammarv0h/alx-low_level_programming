#include <stdio.h>

/**
 * main - Computes and prints the sum of multiples of 3 or 5 below 1024
 *
 * Return: Always 0
 */
int main(void)
{
    int limit = 1024;
    int sum = 0;
    int i;

    for (i = 0; i < limit; i++)
    {
        if (i % 3 == 0 || i % 5 == 0)
            sum += i;
    }

    char buffer[20];
    sprintf(buffer, "%d\n", sum);
    write(1, buffer, strlen(buffer));

    return 0;
}

