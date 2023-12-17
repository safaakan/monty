#include "monty.h"

/**
 * _pchar -  prints the char at the top of the stack.
 * @head: Stack head.
 * @c: line_number
 * Return: No return.
*/

void _pchar(stack_t **head, unsigned int c)
{
stack_t *temp;
temp = *head;
if (!temp)
{
fprintf(stderr, "L%d: can't pchar, stack empty\n", c);
fclose(var.ptr_file);
free(var.line_cont);
free_stk(*head);
exit(EXIT_FAILURE);
}
if (temp->n > 127 || temp->n < 0)
{
fprintf(stderr, "L%d: can't pchar, value out of range\n", c);
fclose(var.ptr_file);
free(var.line_cont);
free_stk(*head);
exit(EXIT_FAILURE);
}
printf("%c\n", temp->n);
}
