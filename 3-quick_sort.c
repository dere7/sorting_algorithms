#include "sort.h"

/**
 * swap - swaps a and b
 * @a: pointer a
 * @b: pointer b
 */
void swap(int* a, int* b)
{
    int t = *a;
    *a = *b;
    *b = t;
}
 
/**
 * partition - same in both iterative and recursive
 * @arr: list
 * @l: low index
 * @h: high index
 * Return: partition index
 */
int partition(int arr[], int l, int h)
{
    int x = arr[h];
    int i = (l - 1);
 
    for (int j = l; j <= h - 1; j++) {
        if (arr[j] <= x) {
            i++;
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i + 1], &arr[h]);
    return (i + 1);
}

/**
 * quick_sort - sorts an array in asc order
 * @list: array
 * @size: size of array
 */
void quick_sort(int *list, size_t size)
{
    size_t l = 0, h = size - 1;
    int stack[h - l + 1];
 
    int top = -1;
 
    stack[++top] = l;
    stack[++top] = h;
 
    while (top >= 0) {
        h = stack[top--];
        l = stack[top--];
 
        int p = partition(list, l, h);
 
        if (p - 1 > l) {
            stack[++top] = l;
            stack[++top] = p - 1;
        }
 
        if (p + 1 < h) {
            stack[++top] = p + 1;
            stack[++top] = h;
        }
    }
}
