#include "monty.h"
/**
 * add_nod - add node to the head stack
 * @h: head of the stack
 * @n: new_value
 * Return: no return
*/
void add_nod(stack_t **h, int n)
{

	stack_t *new, *temp;

	temp = *h;
	new = malloc(sizeof(stack_t));
	if (new == NULL)
	{ printf("Error\n");
		exit(0); }
	if (temp)
		temp->prev = new;
	new->n = n;
	new->next = *h;
	new->prev = NULL;
	*h = new;
}
