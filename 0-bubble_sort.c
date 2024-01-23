#include "sort.h"

/**
 * bubble_sort - implementation of the bubble sort algorithm
 * @array: array to be sorted
 * @size: size of the array
 * Description:The algorithm sorts an array of inters in ascending order
 */
void bubble_sort(int *array, size_t size)
{
	size_t i = size - 1;
	size_t j;

	if (size > 1)
	{
		while (i)
		{
			for (j = 0; j < i; j++)
			{
				if (array[j] > array[j + 1])
				{
					int temp = array[j];

					array[j] = array[j + 1];
					array[j + 1] = temp;
					print_array(array, size);
				}
			}

			i--;
		}
	}
}
