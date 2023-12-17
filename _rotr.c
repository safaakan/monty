#include "monty.h"

/**
 * _rotr - rotates the stack to the bottom.
* @head: stack head
 * @c: line_number
 * Return: no return
*/
void _rotr(stack_t **head, unsigned int c)
{
	stack_t *current_node;
	int prev_node_value, temp;

	void c;

	if (!head || !*head)
		return;

	temp = (*head)->n;
	current_node = (*head)->next;
	while (current_node)
	{
		prev_node_value = temp;
		temp = current_node->n;
		current_node->n = prev_node_value;
		current_node = current_node->next;
	}
	(*head)->n = temp;
}
