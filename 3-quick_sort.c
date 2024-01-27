#include "sort.h"

/**
 * swap - swaps two integers
 * @x: pointer to integer x
 * @y: pointer to integer y
 */
void swap(int *x, int *y)
{
	int temp = *x;

	*x = *y;
	*y = temp;
}

/**
 * lomuto_partition - implementation of lomoto's partition algorithm
 * @array: The array to partition
 * @end: Size of in length of array
 * Return: The index of the pivot after partition
 */
int lomuto_partition(int *array, size_t end)
{
	int pivot = array[end - 1];
	size_t i = 0;
	size_t j = 0;

	while (j < end - 1)
	{
		if (array[j] <= pivot)
		{
			swap(&array[i], &array[j]);
			i++;
			print_array(array, end);
		}

		j++;
	}

	swap(&array[i], &array[end - 1]);

	return (i);
}

/**
 * quick_sort - implementation of the quick sort algorithm
 * @array: The input array to sort
 * @size: Size of the array
 * Description: sorts the array in incresing order using-
 * lomuto's partition scheme
 */
void quick_sort(int *array, size_t size)
{
	if (size >= 2)
	{
		int pivot = lomuto_partition(array, size);

		quick_sort(array, pivot);
		quick_sort(array + pivot + 1, size - pivot - 1);
	}
}
