#include "sort.h"

/**
 * insertion_sort_list - sorts a doubly linked list using
 * insertion sort algorithm
 * @list: doubly linked list to sort
 * Return: void
 */

void insertion_sort_list(listint_t **list)
{
	listint_t *temp = (*list)->next;
	listint_t *current;

	while (temp)
	{
		current = temp;
		while (current->prev)
		{
			if (current->n < current->prev->n)
			{
				swap(list, current, current->prev);
			}
			current = current->prev;
			if (current->n > current->prev->n)
				break;
		}
		temp = temp->next;
	}
}
