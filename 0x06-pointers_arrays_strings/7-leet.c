#include "main.h"

/**
 * leet - Encodes a string into 1337.
 * @str: The string to encode.
 *
 * Return: Pointer to the resulting string.
 */
char *leet(char *str)
{
    int i, j;
    char leet_chars[] = "aAeEoOtTlL";
    char leet_nums[] = "43071";

    for (i = 0; str[i] != '\0'; i++)
    {
        for (j = 0; leet_chars[j] != '\0'; j++)
        {
            if (str[i] == leet_chars[j])
            {
                str[i] = leet_nums[j];
                break;
            }
        }
    }

    return str;
}
