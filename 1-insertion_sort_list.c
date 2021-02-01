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

	while (current != NULL)  /* step down the list while i < size */
	{
		current = current->next;
		/* start at list->next and check for temp->n < temp->next->n */
		while ((temp->prev != NULL) && (temp->n < temp->prev->n))
		{
			temp->prev->next = temp->next;
			if (temp->next != NULL)
				temp->next->prev = temp->prev;

			temp->next = temp->prev;
			temp->prev = temp->next->prev;

			if (temp->prev != NULL)
				temp->prev->next = temp;
			else
				*list = temp;
			temp->next->prev = temp;
			print_list(*list);
		}
		temp = current;
	}
}
