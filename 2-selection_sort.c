#include "sort.h"

/**
 * selection_sort - sorts an array of integers
 * in ascending order using the Selection sort algorithm.
 *
 * @array: A pointer to an element of the array.
 * @size: The size of the array.
 */
void selection_sort(int *array, size_t size)
{
	unsigned int i, j, j_min;
	int temp;

	for (i = 0; i < size - 1; i++)
	{
		j_min = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[j_min])
				j_min = j;
		}

		if (j_min != i)
		{
			temp = array[i];
			array[i] = array[j_min];
			array[j_min] = temp;
		}
		print_array(array, size);
	}
}
