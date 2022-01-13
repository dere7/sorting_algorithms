#include "sort.h"

/**
 * selection_sort - sorts an array in asc order
 * @list: array
 * @size: size of array
 */
void selection_sort(int *list, size_t size)
{
	size_t i, j, temp;

	for (i = 0; i < size - 1; ++i)
	{
		size_t minIndex = i;

		for (j = i; j < size; ++j)
		{
			if (list[minIndex] > list[j])
				minIndex = j;
		}

		if (i != minIndex)
		{
			temp = list[i];
			list[i] = list[minIndex];
			list[minIndex] = temp;
			print_array(list, size);
		}
	}
}
