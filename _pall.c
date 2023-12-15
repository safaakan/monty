#include "monty.h"
/**
 * _pall - prints the stack
 * @head: stack head
 * @c: no used
 * Return: no return
*/
void _pall(stack_t **head, unsigned int c)
{
	stack_t *temp;
	(void)c;

	temp = *head;
	if (temp == NULL)
		return;
	while (temp)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
	}
}
