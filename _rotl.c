#include "monty.h"

/**
 * _rotl- rotates the stack to the top.
 * @head: stack head.
 * @c: line_number.
 * Return: no return.
 */

void _rotl(stack_t **head,  __attribute__((unused)) unsigned int c)
{
	stack_t *temp = *head, *h;

	if (*head == NULL || (*head)->next == NULL)
	{
		return;
	}
	h = (*head)->next;
	h->prev = NULL;
	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	temp->next = *head;
	(*head)->next = NULL;
	(*head)->prev = temp;
	(*head) = h;
}
