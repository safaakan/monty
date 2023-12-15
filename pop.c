#include "monty.h"
/**
 * _pop - prints the top
 * @head: stack head
 * @c: line_number
 * Return: no return
*/
void _pop(stack_t **head, unsigned int c)
{
	stack_t *temp;

	if (*head == NULL)
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", c);
		fclose(var.ptr_file);
		free(var.line_cont);
		free_stk(*head);
		exit(EXIT_FAILURE);
	}
	temp = *head;
	*head = temp->next;
	free(temp);
}
