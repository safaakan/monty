#include "monty.h"
/**
 * _mod - divs the top two elements of the stack.
 * @head: stack head
 * @c: line_number
 * Return: no return
*/
void _mod(stack_t **head, unsigned int c)
{
	stack_t *temp;
	int len = 0, i;

	temp = *head;
	while (temp)
	{
		temp = temp->next;
		len++;
	}
	if (len < 2)
	{
		fprintf(stderr, "L%d: can't mod, stack too short\n", c);
		fclose(var.ptr_file);
		free(var.line_cont);
		free_stk(*head);
		exit(EXIT_FAILURE);
	}
	temp = *head;
	if (temp->n == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", c);
		fclose(var.ptr_file);
		free(var.line_cont);
		free_stk(*head);
		exit(EXIT_FAILURE);
	}
	i = temp->next->n % temp->n;
	temp->next->n = i;
	*head = temp->next;
	free(temp);
}
