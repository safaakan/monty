#include "monty.h"

/**
 * _swap - Swaps the top two elements of the stack.
 * @head: stack head.
 * @c: Line number.
 * Return: No return.
 */

void _swap(stack_t **head, unsigned int c)
{
	stack_t *temp;
	int len = 0, i;

	temp = *head;

/* Calculate the number of elements in the stack */
	while (temp)
	{
		temp = temp->next;
		len++;
	}

/* Check if there are at least two elements in the stack */
	if (len < 2)
	{
		fprintf(stderr, "L%d: can't swap, stack too short\n", c);
		fclose(var.ptr_file);
		free(var.line_cont);
		free_stk(*head);
		exit(EXIT_FAILURE);
	}

/* Swap the top two elements */
	temp = *head;
	i = temp->n;
	temp->n = temp->next->n;
	temp->next->n = i;
}
