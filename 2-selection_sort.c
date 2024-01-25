#include "sort.h"

/**
 * selection_sort - implementation of the selection sort algorithm.
 * @array: pointer to an array of intergers to sort
 * @size: size of the array
 * Description: sorts an array of integers in ascending order
 */
void selection_sort(int *array, size_t size)
{
	size_t i, y, index, temp;
	int min;

	i = 0;
	y = 0;

	if (size > 1)
	{
		while (i < size)
		{
			min = array[i];
			y = i + 1;
			while (y < size)
			{
				if (min > array[y])
				{
					index = y;
					min = array[y];
				}

				if (y + 1 == size && array[i] > min)
				{
					temp = array[i];
					array[i] = min;
					array[index] = temp;
					print_array(array, size);
				}

				y++;
			}

			i++;
		}
	}

}
