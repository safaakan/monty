#include "monty.h"
<<<<<<< HEAD

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

=======
/**
 * _div - divs the top two elements of the stack.
 * @head: stack head
 * @c: line_number
 * Return: no return
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
>>>>>>> a9a32c8cbd012af403895b655a74f2042a6af7da
