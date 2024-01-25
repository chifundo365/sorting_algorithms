#include "sort.h"

/**
 * selection_sort - implementation of the selection sort algorithm.
 * @array: pointer to an array of intergers to sort
 * @size: size of the array
 * Description: sorts an array of integers in ascending order
 */
void selection_sort(int *array, size_t size)
{
	if (size > 1)
	{
		for (int i = 0; i < size; i++)
		{
			int min = array[i];

			for (int y = i + 1; y < size; y++)
			{
				if (min > array[y])
				{
					int index = y;

					min = array[y];
					if (y + 1 == size)
					{
						temp = array[i];
						array[i] = min;
						array[index] = temp;
					}
				}
			}

		}
	}

}
