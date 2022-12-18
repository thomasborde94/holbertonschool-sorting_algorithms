#include "sort.h"

/**
 * insertion_sort_list - sorts a doubly linked list using
 * insertion sort algorithm
 * @list: doubly linked list to sort
 * Return: void
 */

void insertion_sort_list(listint_t **list)
{
	listint_t *sorted = NULL;

	while (*list != NULL)
	{
		listint_t *current = *list;
		*list = (*list)->next;

		if (sorted == NULL || current->n < sorted->n)
		{
			current->prev = NULL;
			current->next = sorted;

			if (sorted != NULL)
			{
				sorted->prev = current;
			}
			sorted = current;
		}
		else
		{
			listint_t *node = sorted;

			while (node->next != NULL && node->next->n < current->n)
			{
				node = node->next;
			}
			current->prev = node;
			current->next = node->next;
			node->next = current;
			if (current->next != NULL)
			{
			current->next->prev = current;
			}
		}
	}
	*list = sorted;
}
