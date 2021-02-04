#include "sort.h"

/**
 * radix_sort - Radix sort algorithm
 * @array: Pointer to array being sorted.
 * @size: Size of the array.
 *
 * Return: No value returned.
 */
void radix_sort(int *array, size_t size)
{
	if (array == NULL || size < 2)
		return;

	print_array(array, size);
}
