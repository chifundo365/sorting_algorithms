#include "sort.h"

/**
 * insertion_sort_list - implementatiin of insertion sort algorithm
 * @list: a pointer to a pointer of a doubly linked list.
 * Description: sorts a doubly linked list in ascending order.
 */
void insertion_sort_list(listint_t **list)
{	listint_t *prev, *temp, *lnode,  *current = *list;

	while (current)
	{	prev = current->prev;
		if (prev && prev->n > current->n)
		{	lnode = current->prev;
			while (prev)
			{
				if (current->n >= prev->n)
				{       temp = prev->next;
					current->prev->next = current->next;
					if (current->next)
						current->next->prev = current->prev;
					prev->next = current;
					current->prev = prev;
					current->next = temp;
					temp->prev = current;
					break;
				}

				if (prev->prev == NULL)
				{	temp = current->prev;
					if (current->next)
					{	current->prev->next = current->next;
						current->next->prev = temp;
					}
					else
						current->prev->next = NULL;
					current->next = *list;
					(*list)->prev = current;
					current->prev = NULL;
					*list = current;
					break;
				}
				prev = prev->prev;
			}
			current = lnode;
			print_list(*list);
		}
		current = current->next;
	}
}
