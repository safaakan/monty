#include "monty.h"
/**
 * v_que - prints the top
 * @h: stack head
 * @c: line_number
 * Return: no return
*/
void v_que(stack_t **h, unsigned int c)
{
	(void)h;
	(void)c;
	var.stk_que = 1;
}

/**
 * add_que - add node to the tail stack
 * @n: new_value
 * @h: head of the stack
 * Return: no return
*/
void add_que(stack_t **h, int n)
{
	stack_t *new, *temp;

	temp = *h;
	new = malloc(sizeof(stack_t));
	if (new == NULL)
	{
		printf("Error\n");
	}
	new->n = n;
	new->next = NULL;
	if (temp)
	{
		while (temp->next)
			temp = temp->next;
	}
	if (!temp)
	{
		*h = new;
		new->prev = NULL;
	}
	else
	{
		temp->next = new;
		new->prev = temp;
	}
}
