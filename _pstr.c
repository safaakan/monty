#include "monty.h"

/**
 * _pstr - prints the string starting at the top of the stack.
 * @head: stack head.
 * @c: line_number
 * Return: no return.
*/
void _pstr(stack_t **head, unsigned int c)
{
	stack_t *temp;
	(void)c;

	temp = *head;
	while (temp)
	{
		if (temp->n > 127 || temp->n <= 0)
		{
			break;
		}
		printf("%c", temp->n);
		temp = temp->next;
	}
	printf("\n");
}
