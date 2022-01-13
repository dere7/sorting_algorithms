#include "sort.h"
/**
 * insertion_sort_list - sorts an array in asc order
 * @list: linked list
 */
void insertion_sort_list(listint_t **list)
{
    listint_t *i, *j, temp;

    for (i = (*list)->next; i != NULL; i = i->next)
    {
        for (j = i->prev; j != NULL; j = j->prev)
        {
            if (i->n < j->n)
            {
                if (i == *list)
                    *list = j;
                temp.next = i->next;
                i->prev = j->prev;
                if (j->next == i){
                    temp.prev = i->prev->prev;
                    i->next = j->next->next;
                } else {
                    temp.prev = i->prev;
                    i->next = j->next;
                }
                j->next = temp.next;
                j->prev = temp.prev;

                print_list(*list);
            }
        }
    }
}
