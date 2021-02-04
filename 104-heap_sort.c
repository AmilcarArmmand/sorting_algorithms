#include "sort.h"

/**
 * heap_sort - Heap sort algorithm
 * @array: Pointer to array being sorted.
 * @size: Size of the array.
 *
 * Return: No value returned.
 */
void heap_sort(int *array, size_t size)
{
	if (array == NULL || size < 2)
		return;

	print_array(array, size);
}
