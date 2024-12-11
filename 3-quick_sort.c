#include "sort.h"

/**
* partition - sorts an array of integers using the Quick sort algorithm.
* @array : array to sort.
* @low : lowest element of the array.
* @high : highest element of the array.
* Return: nothing.
**/

int partition(int *array, int low, int high, size_t size)
{
	int pivot = array[high], temp, j;
	int i = low - 1;

	for (j = low; j < high; j++)
	{
		if (array[j] < pivot)
		{
			i++;
			temp = array[i];
			array[i] = array[j];
			array[j] = temp;
		}
	}
	temp = array[i + 1];
	array[i + 1] = array[high];
	array[high] = temp;
	print_array(array, size);
	return (i + 1);
}

/**
* quick_sort_bis - sorts an array of integers using the Quick sort algorithm.
* @array : array to sort.
* @low : lowest element of the array.
* @high : highest element of the array.
* Return: nothing.
**/

void quick_sort_bis(int *array, int low, int high, size_t size)
{
	int pi;

	if (low < high)
	{
		pi = partition(array, low, high, size);
		quick_sort_bis(array, low, pi - 1, size);
		quick_sort_bis(array, pi + 1, high, size);
	}
}

/**
* quick_sort - sorts an array of integers using the Quick sort algorithm.
* @array : array to sort.
* @size : of the array.
* Return: nothing.
**/

void quick_sort(int *array, size_t size)
{
	if (size < 2)
		return;

	quick_sort_bis(array, 0, size - 1, size);
}
