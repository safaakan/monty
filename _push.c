#include "monty.h"
/**
 * _push - add node to the stack
 * @head: stack head
 * @c: line_number
 * Return: no return
*/
void _push(stack_t **head, unsigned int c)
{
	int n, j = 0, f = 0;

	if (var.arg_val)
	{
		if (var.arg_val[0] == '-')
			j++;
		for (; var.arg_val[j] != '\0'; j++)
		{
			if (var.arg_val[j] > 57 || var.arg_val[j] < 48)
				f = 1; }
		if (f == 1)
		{ fprintf(stderr, "L%d: usage: push integer\n", c);
			fclose(var.ptr_file);
			free(var.line_cont);
			free_stk(*head);
			exit(EXIT_FAILURE); }}
	else
	{ fprintf(stderr, "L%d: usage: push integer\n", c);
		fclose(var.ptr_file);
		free(var.line_cont);
		free_stk(*head);
		exit(EXIT_FAILURE); }
	n = atoi(var.arg_val);
	if (var.stk_que == 0)
		add_nod(head, n);
	else
		add_que(head, n);
}
