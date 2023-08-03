#include "main.h"
#include <stddef.h>

/**
 * binary_to_uint - Converts a binary number to an unsigned int.
 * @b: A pointer to the binary string (only 0's and 1's).
 *
 * Return: The converted unsigned int number, or 0 if b is NULL or invalid.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;

	if (b == NULL)
		return (0);
	while (*b != '\0')
	{
		if (*b != '0' && *b != '1')
			return (0);
		result = result << 1; /*make space for the next bit */

		if (*b == '1')
			result |= 1; /* Set least significant bit if it's 1 */
		b++;
	}
	return (result);
}
