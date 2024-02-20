#include "sort.h"
/**
 * selection_sort - sorts an array using
 * selection sort algorithm
 * @array: the array
 * @size: size of the array
*/
void selection_sort(int *array, size_t size)
{
size_t imin, i, j;
size_t tmp;

if (array == NULL)
{
    return;
}

for (i = 0; i < size - 1; i++)
{
    imin = i;
    for (j = i + 1; j < size; j++)
    {
        if (array[i] < array[imin])
        {
            imin = j;
        }
        tmp = array[i];
        array[i] = array[imin];
        array[imin] = tmp;
        print_array(array, size);
    }
}

}
