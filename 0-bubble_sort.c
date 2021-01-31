#include "sort.h"

/**
 * bubble_sort - Bubble sort algorithm
 * @array: Pointer to array being sorted.
 * @size: Size of the array.
 *
 * Return: No value returned.
 */
void bubble_sort(int *array, size_t size)
{
	size_t i;
	int swapped;
	int temp;

	if (array == NULL || size < 2)
		return;

	swapped = 1;
	while (swapped)
	{
		swapped = 0;
		for (i = 1; i < size; i++)
		{
			if (array[i - 1] > array[i])
			{
				temp = array[i - 1];
				array[i - 1] = array[i];
				array[i] = temp;
				swapped = 1;
				print_array(array, size);
			}
		}
	}
}
