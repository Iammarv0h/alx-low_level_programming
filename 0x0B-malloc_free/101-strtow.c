#include <stdlib.h>
#include "main.h"

/**
 * count_words - Counts the number of words in a string.
 * @str: The input string.
 *
 * Return: The number of words.
 */
int count_words(char *str)
{
	int i, count, in_word;

	count = 0;
	in_word = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] == ' ')
			in_word = 0;
		else if (in_word == 0)
		{
			in_word = 1;
			count++;
		}
	}

	return (count);
}

/**
 * free_words - Frees the allocated memory for words.
 * @words: The array of words.
 * @count: The number of words.
 */
void free_words(char **words, int count)
{
	int i;

	for (i = 0; i < count; i++)
		free(words[i]);

	free(words);
}

/**
 * allocate_word - Allocates memory for a word and copies it.
 * @str: The input string.
 * @start: The starting index of the word.
 * @end: The ending index of the word.
 *
 * Return: A pointer to the allocated word, or NULL if it fails.
 */
char *allocate_word(char *str, int start, int end)
{
	int i, length;
	char *word;

	length = end - start + 1;
	word = malloc(sizeof(char) * (length + 1));
	if (word == NULL)
		return (NULL);

	for (i = 0; i < length; i++)
		word[i] = str[start++];

	word[i] = '\0';

	return (word);
}

/**
 * strtow - Splits a string into words.
 * @str: The input string.
 *
 * Return: A pointer to an array of strings (words), or NULL if it fails.
 */
char **strtow(char *str)
{
	int i, j, k, len, count;
	char **words;

	if (str == NULL || str[0] == '\0')
		return (NULL);

	count = count_words(str);
	if (count == 0)
		return (NULL);

	words = malloc(sizeof(char *) * (count + 1));
	if (words == NULL)
		return (NULL);
	i = 0;
	k = 0;
	while (str[i] != '\0')
	{
		if (str[i] != ' ')
		{
			len = 0;
			j = i;
			while (str[j] != ' ' && str[j] != '\0')
			{
				len++;
				j++;
			}
			words[k] = allocate_word(str, i, j - 1);
			if (words[k] == NULL)
			{
				free_words(words, k);
				return (NULL);
			}
			k++;
			i = j;
		}
		else
			i++;
	}
	words[k] = NULL;
	return (words);
}
