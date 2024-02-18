#include "sort.h"

/**
* bubble_sort - apply bubble sort algorithm
* @array: pointer to int (array of ints)
* @size: (size_t) size of the array
*/
void bubble_sort(int *array, size_t size)
{
	size_t i, k;
	int tmp;

	if (array != NULL)
	{
	for (i = 1; i < size; i++)
	{

		for (k = 0; k < size - 1; k++)
		{
			if (array[k] > array[k + 1])
			{
				tmp = array[k];
				array[k] = array[k + 1];
				array[k + 1] = tmp;
				print_array(array, size);
			}
		}
	}
	}

}
