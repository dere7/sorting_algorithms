#ifndef SORT_H
#define SORT_H
#include <stddef.h>
/**
 * struct listint_s - Doubly linked list node
 *
 * @n: Integer stored in the node
 * @prev: Pointer to the previous element of the list
 * @next: Pointer to the next element of the list
 */
typedef struct listint_s {
    const int n;
    struct listint_s *prev;
    struct listint_s *next;
} listint_t;

void print_array(const int *array, size_t size);
void print_list(const listint_t *head);

void bubble_sort(int *list, size_t size);
void selection_sort(int *array, size_t size);
void insertion_sort_list(listint_t **list);
void quick_sort(int *list, size_t size);
int are_they_neighbours(listint_t *A, listint_t *B);
void refresh_outer_pointers(listint_t *A);
void swap(listint_t *A, listint_t *B);
void quick_sorter(int *array, int lo, int hi, int size);
listint_t *get_head(listint_t *list);
int partition(int *array, int lo, int hi, int size);

#endif
