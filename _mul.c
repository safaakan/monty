#include "monty.h"
/**
 * _mul - muls the top two elements of the stack.
 * @head: stack head
 * @c: line_number
 * Return: no return
*/
void _mul(stack_t **head, unsigned int c)
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
		fprintf(stderr, "L%d: can't mul, stack too short\n", c);
		fclose(var.ptr_file);
		free(var.line_cont);
		free_stk(*head);
		exit(EXIT_FAILURE);
	}
	temp = *head;
	i = temp->n * temp->next->n;
	temp->next->n = i;
	*head = temp->next;
	free(temp);
}
