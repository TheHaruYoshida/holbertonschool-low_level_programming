#include "lists.h"

/**
  * delete_dnodeint_at_index - deletes node at certain index of a linked list.
  * @head: Pointer to the header node of the linked list.
  * @index: Index of the list where the node should be deleted.
  *
  * Return: 1 if it succeeded, -1 if it failed.
  */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *tmp, *delete, *prv, *nxt;
	unsigned int i = 0;

	if (!(*head))
		return (-1);
	if (index == 0)
	{
		tmp = (*head)->next;
		free(*head);
		*head = tmp;
		(*head)->prev = NULL;
		return (1);
	}
	delete = *head;
	while (delete->next && i != index)
	{
		i++;
		delete = delete->next;
	}
	if (i == index)
	{
		prv = delete->prev;
		if (!delete->next)
			prv->next = NULL;
		else
		{
			nxt = delete->next;
			prv->next = nxt;
			nxt->prev = prv;
		}
		free(delete);
		return (1);
	}
	else
		return (-1);
}
