#include "sort.h"

/**
 * merge_sort - Merge sort algorithm
 * @array: Pointer to array being sorted.
 * @size: Size of the array.
 *
 * Return: No value returned.
 */
void merge_sort(int *array, size_t size)
{
	if (array == NULL || size < 2)
		return;

	print_array(array, size);
}
