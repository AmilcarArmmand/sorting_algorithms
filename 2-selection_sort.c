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
	unsigned int i, j;
	int minimum, temp;

	for (i = 0; i < size - 1; i++)
	{
		minimum = i;
		for (j = i + 1; j < size ; j++)
		{
			if (array[minimum] > array[j])
				minimum = j;
		}
		/* swap elements */
		temp = array[i];
		array[i] = array[minimum];
		array[minimum] = temp;
		print_array(array, size);
	}
}
