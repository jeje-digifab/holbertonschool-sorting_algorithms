#include "sort.h"


void insertion_sort_list(listint_t **list)
{
	listint_t *sorted, *curr, *next, *aux, *temp;

	sorted = NULL;
	curr = *list;

	if (!list && !(*list)->next)
	{
		print_list(*list);
	}


	while (curr != NULL)
	{
		next = curr->next;

		if (sorted == NULL || sorted->n > curr->n)
		{
				curr->next = sorted;
				sorted = curr;
		}

		else
		{
			aux = sorted;

			while (aux->next != NULL && aux->next->n <= curr->n)
			{
				aux = aux->next;
			}

			if (aux->next == NULL)
			{
				aux->next = curr;
				curr->prev = aux;
				curr->next = NULL;
				print_list(*list);
			}
			
			else
			{
				temp = aux->next;
				aux->next = curr;
				curr->prev = aux;
				curr->next = temp;
				temp->prev = curr;
				print_list(*list);
			}
		}

		curr = next;
	}

	*list = sorted;
}