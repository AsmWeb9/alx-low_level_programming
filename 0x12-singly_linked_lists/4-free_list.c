#include "lists.h"
/**
 * free_list - frees all nodes
 * of a list
 * @head: pointer to head node
 * Return: void
 */
void free_list(list_t *head)
{
	list_t *current;

	while (head != NULL)
	{
		current = head;
		head = head->next;
		free(current->str);
		free(current);
	}
}
