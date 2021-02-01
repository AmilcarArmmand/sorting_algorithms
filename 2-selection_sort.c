#include "sort.h"

/**
 * selection_sort - Selection sort algorithm that sorts in ascending order
 * @array: an array of integers
 * @size: size of the array
 *
 * Return: No value returned.
 */
void selection_sort(int *array, size_t size)
{
	size_t i, j, temp;
	size_t minimum;

	if (array == NULL || size < 2)
		return;

	for (i = 0; i < size - 1; i++)
	{
		minimum = i;
		/* check for same values */
		for (j = i + 1; j < size ; j++)
		{
			/* if element is less, set to new minumum */
			if (array[minimum] > array[j])
				minimum = j;
		}
		if (minimum != i)
		{
			/* swap elements */
			temp = array[i];
			array[i] = array[minimum];
			array[minimum] = temp;
		}
		print_array(array, size);
	}
}
