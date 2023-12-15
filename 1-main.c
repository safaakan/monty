#include "monty.h"
#include <stdio.h>
var_t var = {NULL, NULL, NULL, 0};
/**
* main - monty code interpreter
* @argc: number of arguments
* @argv: monty file location
* Return: 0 on success
*/
int main(int argc, char *argv[])
{
	char *_cont;
	FILE *file;
	size_t sz = 0;
	ssize_t rd_ln = 1;
	stack_t *stk = NULL;
	unsigned int c = 0;

	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	file = fopen(argv[1], "r");
	var.ptr_file = file;
	if (!file)
	{
		fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}
	while (rd_ln > 0)
	{
		_cont = NULL;
		rd_ln = getline(&_cont, &sz, file);
		var.line_cont = _cont;
		c++;
		if (rd_ln > 0)
		{
			exec(_cont, &stk, c, file);
		}
		free(_cont);
	}
	free_stk(stk);
	fclose(file);
return (0);
}
