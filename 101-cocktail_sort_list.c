#include "sort.h"

/**
 * cocktail_sort_list - Cocktail sort algorithm
 * @list: Pointer to doubly linked list to be sorted.
 *
 * Return: No value returned.
 */
void cocktail_sort_list(listint_t **list)
{
	listint_t *temp = NULL;

	if (list == NULL || (*list)->next == NULL)
		return;

	temp = *list;
	print_list(temp);
}
