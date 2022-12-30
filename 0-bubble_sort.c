#include "sort.h"

/**
 * bubble_sort - sorts an array of integers in ascending order using
 * the Bubble sort algorithm
 * @array: array to sort
 * @size: size of the array
 * Return: void
 */

void bubble_sort(int *array, size_t size)
{
	size_t i = 0;
	int count = 0, tempi;

	while (i < size && size > 1)
	{
		if ((array[i + 1] != '\0') && array[i] > array[i + 1])
		{
			tempi = array[i];
			array[i] = arrayi(array, i);
			array[i + 1] = tempi;
			print_array(array, size);
			count++;
		}
		i++;
		if (i == size - 1 && count != 0)
		{
			i = 0;
			count = 0;
		}
		if (i == size - 1 && count == 0)
			break;
	}
}


/**
 * arrayi - gives i + 1 value to index i
 * @array: array
 * @i: index to change the value of
 * Return: new value
 */

int arrayi(int *array, int i)
{
	int tempiplusone;

	tempiplusone = array[i + 1];
	array[i] = tempiplusone;
	return (array[i]);
}
