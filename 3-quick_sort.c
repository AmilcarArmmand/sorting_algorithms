#include "sort.h"

/**
 * partition - set the pivot of the sub sort for the Lomuto algorithm
 * @array: an array of integers
 * @size: size of the array
 * @left:  first index in the array to sort
 * @right: the last index in the array to sort
 *
 * Return: No value returned.
 */
int partition(int *array, size_t size, int left, int right)
{
	int *pivot;
	int below, above, temp;

	pivot = array + right;
	below = above = left;
	for (; below < right; below++)
	{
		if (array[below] < *pivot)
		{
			if (above < below)
			{
				/* swap elements */
				temp = array[below];
				array[below] = array[above];
				array[above] = temp;
				print_array(array, size);
			}
			above++; /* above */
		}
	}

	if (array[above] > *pivot)
	{
		temp = array[above];
		array[above] = *pivot;
		*pivot = temp;
		print_array(array, size);
	}

	return (above);
}

/**
 * lomuto_sub_sort - sub sort using Lomuto algorithm
 * @array: an array of integers
 * @size: size of the array
 * @lo: the first index in the array to sort
 * @hi: the last index in the array to sort
 *
 * Return: No value returned.
 */
void lomuto_sub_sort(int *array, size_t size, int lo, int hi)
{
	int pivot;

	if (lo < hi)
	{
		pivot = partition(array, size, lo, hi);
		lomuto_sub_sort(array, size, lo, pivot - 1);
		lomuto_sub_sort(array, size, pivot + 1, hi);
	}
}

/**
 * quick_sort - a function that sorts an array of integers using Quick sort
 * @array: an array of integers
 * @size: size of the array
 *
 * Return: No value returned.
 */
void quick_sort(int *array, size_t size)
{
	int lo, hi;

	lo = 0;
	hi = (int)size - 1;

	if (array == NULL || size < 2)
		return;

	lomuto_sub_sort(array, size, lo, hi);
}
