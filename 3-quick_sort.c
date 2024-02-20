#include "sort.h"
/**
 * lomoto_partition - partionize an array into
 * sub arrays, and returns a pivot index
 * @array: pointer to int (array of ints)
 * @start: (int) index start
 * @end: (int) index end
 * Return: The pivot in which the array partitioned upon
*/
int lomoto_partition(int *array, int start, int end)
{
	int pivot = array[end];
	int pindex = start;
	int i, tmp;

	if (array == NULL)
	{
		return (-1);
	}

	for (i = start; i < end; i++)
	{
		if (array[i] <= pivot)
		{
			tmp = array[i];
			array[i] = array[pindex];
			array[pindex] = tmp;
			pindex++;
		}
	}
	tmp = array[end];
	array[end] = array[pindex];
	array[pindex] = tmp;
	return (pindex);
}

/**
 * Quick - implenets the recursive quick algorithm
 * @array: The array
 * @start: start index
 * @end: end index
 * @size: size of the array
*/
void Quick(int *array, int start, int end, size_t size)
{
	int pindex;

	if (start < end)
	{
		print_array(array, size);
		pindex = lomoto_partition(array, start, end);
		Quick(array, start, pindex - 1, size);
		Quick(array, pindex + 1, end, size);
	}
}

/**
 * quick_sort - calls the quick algo
 * @array: the array
 * @size: size of the array
*/
void quick_sort(int *array, size_t size)
{
	int start = 0;
	int end = size - 1;

	Quick(array, start, end, size);
}
