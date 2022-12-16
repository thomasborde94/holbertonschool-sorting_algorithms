#include "sort.h"

/**
 * swap - A function that swaps nodes
 * @list: the node receaced to be moved
 * @node1: first node to be moved
 * @node2: Secsonde node to be moved
 **/
void swap(listint_t **list, listint_t node1, listint_t node2);
{
	node1->next = node2->next;
	node2->prev = node1->prev;
	node1->prev = node2;
	node2->next = nde1;
}
