#include "monty.h"
/**
 * file_print - prints the top
 * @head: stack head
 * @line_num: line number
 * Return: no return
*/
void file_print(stack_t **head, unsigned int line_num)
{
	if (*head == NULL)
	{
		fprintf(stderr, "L%u: can't pint, stack empty\n", line_num);
		fclose(var.ptr_file);
		free(var.line_cont);
		free_stk(*head);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", (*head)->n);
}
