#include "sort.h"

/**
 * insertion_sort_list - Insertion sort algorithm
 * @list: Pointer to a doubly linked list of integers to sort.
 *
 * Return: No value returned.
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *current = NULL;
	listint_t *temp = NULL;

	if (list == NULL || (*list)->next == NULL)
		return;
	current = *list;
	temp = *list;

	print_list(temp);

	while (current)  /* iterate down the list while i < length of list */
	{
		current = current->next; /* x = A[i] / j = i -1 */
		/* start at j and temp->n < temp->next->n */
		while (temp->prev && temp->n < temp->prev->n)
		{
			/* insert the temp node at current if temp-n < current->n */
			/* case where temp->next == NULL */
			print_list(current);
		}
		temp = current;
	}
}
