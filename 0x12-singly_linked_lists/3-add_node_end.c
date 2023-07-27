#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - Adds a new node at the end of a list_t list.
 * @head: Pointer to the head of the list.
 * @str: String to be duplicated and stored in the new node.
 *
 * Return: The address of the new element, or NULL if it failed.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *current;
	char *duplicate_str;
	size_t str_len = 0;

	/* Calculate the length of the input string */
	while (str[str_len])
		str_len++;

	/* Allocate memory for the new node */
	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	/* Duplicate the input string */
	duplicate_str = strdup(str);
	if (duplicate_str == NULL)
	{
		free(new_node);
		return (NULL);
	}
	/* Fill in the new node */
	new_node->str = duplicate_str;
	new_node->len = str_len;
	new_node->next = NULL;
	/* If the list is empty, make the new node the head */
	if (*head == NULL)
	{
		*head = new_node;
	}
	else
	{
		/* Find the last node in the list */
		current = *head;
		while (current->next != NULL)
			current = current->next;
		/* Append the new node to the end of the list */
		current->next = new_node;
	}

	return (new_node);
}
