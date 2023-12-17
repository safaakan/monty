#include "monty.h"
/**
* exec - executes the opcode
* @stack: head linked list - stack
* @c: line_counter
* @file: poiner to monty file
* @_cont: line content
* Return: no return
*/
int exec(char *_cont, stack_t **stack, unsigned int c, FILE *file)
{
	instruction_t operation[] = {
				{"push", _push}, {"pall", _pall}, {"pint", _pint},
				{"pop", _pop}, {"swap", _swap}, {"add", _add},
				{"nop", _nop}, {"sub", _sub}, {"div", _div},
				{"mul", _mul}, {"mod", _mod}, {"pchar", _pchar},
				{"pstr", _pstr}, {"rotl", _rotl}, {"rotr", _rotr},
				{"queue", _queue}, {"stack", _stack}, {NULL, NULL}
				};
	unsigned int j = 0;
	char *op;

	op = strtok(_cont, " \n\t");
	if (op && op[0] == '#')
		return (0);
	var.arg_val = strtok(NULL, " \n\t");
	while (operation[j].opcode && op)
	{
		if (strcmp(op, operation[j].opcode) == 0)
		{	operation[j].f(stack, c);
			return (0);
		}
		j++;
	}
	if (op && operation[j].opcode == NULL)
	{ fprintf(stderr, "L%d: unknown instruction %s\n", c, op);
		fclose(file);
		free(_cont);
		free_stk(*stack);
		exit(EXIT_FAILURE);
	}
	return (1);
}
