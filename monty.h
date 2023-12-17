#ifndef MONTY_H
#define MONTY_H

#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>
#include <ctype.h>
/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO Holberton project
 */
typedef struct stack_s
{
	int n;
	struct stack_s *prev;
	struct stack_s *next;
} stack_t;
/**
 * struct var_s - variables -args, file, line content
 * @arg_val: value
 * @ptr_file: pointer to monty file
 * @line_cont: line content
 * @stk_que: flag change stack <-> queue
 * Description: carries values through the program
 */
typedef struct var_s
{
	char *arg_val;
	FILE *ptr_file;
	char *line_cont;
	int stk_que;
}  var_t;
extern var_t var;
/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO Holberton project
 */
typedef struct instruction_s
{
	char *opcode;
	void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;
ssize_t getline(char **lineptr, size_t *n, FILE *stream);

void _push(stack_t **head, unsigned int c);
void _pall(stack_t **head, unsigned int n);
void _pint(stack_t **head, unsigned int n);
void _nop(stack_t **head, unsigned int c);
void _pop(stack_t **head, unsigned int c);
void _swap(stack_t **head, unsigned int c);
void _add(stack_t **head, unsigned int c);
void _sub(stack_t **head, unsigned int c);
void _div(stack_t **head, unsigned int c);
void _mul(stack_t **head, unsigned int c);
void _div(stack_t **head, unsigned int c);
void _mod(stack_t **head, unsigned int c);


void file_print(stack_t **stack, unsigned int line_num);
void free_stk(stack_t *head);
int exec(char *_cont, stack_t **stack, unsigned int c, FILE *file);
void add_nod(stack_t **h, int n);
void add_que(stack_t **h, int n);
void v_que(stack_t **h, unsigned int c);

#endif
