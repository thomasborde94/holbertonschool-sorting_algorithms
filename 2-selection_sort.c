#include "sort.h"

/**
 * selection_sort - sorts an array of size size
 * @array: array to sort
 * @size: size of the array
 * Return: void
 */

void selection_sort(int *array, size_t size)
{
	size_t i = 0, j, tempi, tempmin;
	size_t min;

	for (i = 0; i < size - 1; i++)
	{
		min = i;

		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[min])
				min = j;
		}
		if (min != i)
		{
			tempi = array[i];
			tempmin = array[min];
			array[i] = tempmin;
			array[min] = tempi;
			print_array(array, size);
		}
	}
}
