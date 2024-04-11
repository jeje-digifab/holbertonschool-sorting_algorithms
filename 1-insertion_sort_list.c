#include "sort.h"

/**
 * insertion_sort_list - Sorts a doubly linked list of integers in ascending
 * order using the Insertion sort algorithm
 * @list: Double pointer to the head of the list
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *current, *tmp;

	if (list == NULL || *list == NULL || (*list)->next == NULL)
		return;

	current = (*list)->next;
	while (current != NULL)
	{
		tmp = current->prev;
		while (tmp != NULL && tmp->n > current->n)
		{
			if (tmp->prev != NULL)
				tmp->prev->next = current;
			if (current->next != NULL)
				current->next->prev = tmp;
			tmp->next = current->next;
			current->prev = tmp->prev;
			current->next = tmp;
			tmp->prev = current;
			if (current->prev == NULL)
				*list = current;
			print_list(*list);
			tmp = current->prev;
		}
		current = current->next;
	}
}
