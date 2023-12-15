#include "monty.h"
/**
 * _pint - prints the top
 * @head: stack head
 * @c: line_number
 * Return: no return
*/
void _pint(stack_t **head, unsigned int c)
{
	if (*head == NULL)
	{
		fprintf(stderr, "L%u: can't pint, stack empty\n", c);
		fclose(var.ptr_file);
		free(var.line_cont);
		free_stk(*head);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", (*head)->n);
}
