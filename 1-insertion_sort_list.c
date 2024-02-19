#include "sort.h"

/**
 * swapNodes - swap two nodes of doubly linked list
 * @head: collection of nodes
 * @node1: first node
 * @node2: second node
*/

void swapNodes(listint_t **head, listint_t *node1, listint_t *node2)
{
	node1->next = node2->next;
	if (node2->next != NULL)
		node2->next->prev = node1;
	node2->prev = node1->prev;
	node2->next = node1;
	if (node1->prev != NULL)
		node1->prev->next = node2;
	else
		*head = node2;
	node1->prev = node2;
	node1 = node2->prev;
}

/**
 * insertion_sort_list - sorts a doubly linked list
 * using insertion algorithm
 * @list: (listint_t) list of doubly linked lists
*/
void insertion_sort_list(listint_t **list)
{
	listint_t *it, *hole, *tmp;

	if (list == NULL || (*list)->next == NULL || *list == NULL)
		return;

	for (it = (*list)->next; it != NULL; it = tmp)
	{
		tmp = it->next;
		hole = it->prev;
		while (hole != NULL && it->n < hole->n)
		{
			swapNodes(list, hole, it);
			print_list((const listint_t *)*list);
		}
	}

}
