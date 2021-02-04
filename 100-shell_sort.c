#include "sort.h"

/**
 * shell_sort - Shell sort algorithm using Knuth sequence
 * @array: Pointer to array being sorted.
 * @size: Size of the array.
 *
 * Return: No value returned.
 */
void shell_sort(int *array, size_t size)
{
	int gap, i, j, temp;

	if (array == NULL || size < 2)
		return;

	for (gap = 1; gap < ((int)size / 3);)
		gap = gap * 3 + 1;

	for (; gap > 0; gap /= 3)
	{
		for (i = gap; i < (int)size; i++)
		{
			temp = array[i];
			for (j = i; j >= gap && array[j - gap] > temp; j -= gap)
			{
				array[j] = array[j - gap];
			}
			array[j] = temp;
			print_array(array, size);
		}
	}
}
