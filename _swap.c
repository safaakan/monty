#include "monty.h"

/**
 * _swap - Swaps the top two elements of the stack.
 * @head: stack head.
 * @c: Line number.
 * Return: No return.
 */

void _swap(stack_t **head, unsigned int c)
{
stack_t *h;
int len = 0, aux;

h = *head;

/* Calculate the number of elements in the stack */
while (h)
{
h = h->next;
len++;
}

/* Check if there are at least two elements in the stack */
if (len < 2)
{
fprintf(stderr, "L%d: can't swap, stack too short\n", c);
fclose(bus.file);
free(bus.content);
free_stk(*head);
exit(EXIT_FAILURE);
}

/* Swap the top two elements */
h = *head;
aux = h->n;
h->n = h->next->n;
h->next->n = aux;
}
