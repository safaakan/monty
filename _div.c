#include "monty.h"

/**
 * _div - Divides the second top element of the stack by the top element of the stack.
 * @head: Stack head.
 * @c: Line_number
 * Return: No return.
*/

void _div(stack_t **head, unsigned int c)
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
fprintf(stderr, "L%d: can't div, stack too short\n", c);
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
i = temp->next->n / temp->n;
temp->next->n = i;
*head = temp->next;
free(temp);
}

