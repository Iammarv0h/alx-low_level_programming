#include "main.h"

/**
 * _strncat - Concatenates two strings up to n bytes.
 * @dest: The destination string.
 * @src: The source string to be appended.
 * @n: The maximum number of bytes from src to be appended.
 *
 * Return: A pointer to the resulting string dest.
 */
char *_strncat(char *dest, const char *src, int n)
{
        int dest_len = 0;
        int i = 0;

        /* Find the length of the destination string*/
        while (dest[dest_len] != '\0')
        {
                dest_len++;
        }
        /*Append at most n bytes from the source string to the destination string*/
        while (src[i] != '\0' && i < n)
        {
                dest[dest_len] = src[i];
                dest_len++;
                i++;
        }
        /* Add the terminating null byte*/
        dest[dest_len] = '\0';
        return (dest);
}
