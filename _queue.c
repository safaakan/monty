#include "monty.h"
/**
 * _queue - prints the top
 * @head: stack head
 * @c: line_number
 * Return: no return
*/
void _queue(stack_t **head, unsigned int c)
{
	(void)head;
	(void)c;
	var.stk_que = 1;
}

/**
 * add_que - add node to the tail stack
 * @c: new_value
 * @head: head of the stack
 * Return: no return
*/
void add_que(stack_t **head, int c)
{
	stack_t *new, *aux;

	aux = *head;
	new = malloc(sizeof(stack_t));
	if (new == NULL)
	{
		printf("Error\n");
	}
	new->n = c;
	new->next = NULL;
	if (aux)
	{
		while (aux->next)
			aux = aux->next;
	}
	if (!aux)
	{
		*head = new;
		new->prev = NULL;
	}
	else
	{
		aux->next = new;
		new->prev = aux;
	}
}
