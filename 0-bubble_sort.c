#include "sort.h"

/**
 * bubble_sort - sorts an array in asc order
 * @list: array
 * @size: size of array
 */
void bubble_sort(int *list, size_t size)
{
	int i, j, temp;

	for (i = size; i > 0; --i)
	{
		for (j = 0; j < i - 1; ++j)
		{
			if (list[j] > list[j + 1])
			{
				temp = list[j + 1];
				list[j + 1] = list[j];
				list[j] = temp;
				print_array(list, size);
			}
		}
	}
}
