#include "lists.h"
#include <stdlib.h>

/**
 * free_listint_safe - Frees a listint_t linked list.
 * @h: Double pointer to the head of the list.
 *
 * Return: The size of the list that was freed.
 */
size_t free_listint_safe(listint_t **h)
{
	size_t size = 0;
	listint_t *current, *temp;

	current = *h;
	while (current != NULL)
	{
		size++;
		temp = current->next;

		/* Setting the node's next pointer to NULL before freeing */
		current->next = NULL;
		free(current);

		if (temp >= current)
		{
			/* List contains a loop, break to avoid infinite loop */
			*h = NULL;

			return (size);
		}

		current = temp;
	}
	*h = NULL; /* Setting the head to NULL */
	return (size);
}
