#include "sort.h"

/**
 * quick_sort - a function that sorts an array of integers
 * @array: array of integer
 * @size: size of the structure
 **/
void quick_sort(int *array, size_t size)
{
	size_t i, j;
	int pivot, temp;

	if (size < 2)
		return;

	pivot = array[size / 2];
	for (i = 0, j = size - 1;; i++, j--)
	{
		while (array[i] < pivot)
			i++;
		while (array[j] > pivot)
			j--;

		if (i >= j)
			break;

		temp = array[i];
		array[i] = array[j];
		array[j] = temp;
	}
}
