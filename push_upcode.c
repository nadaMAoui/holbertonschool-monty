#include "monty.h"
#include <stdio.h>
/**
 * stack_push - a function that pushes a value to the stack
 * @front: the head of the queue
 * @ln: localisation of the opcode(the line number)
 * Return: 0 sucess and 1 fail
 */
int stack_push(stack_t **front, unsigned int ln)
{
	int res;

	if (value[1] == 0)
		res = add_to_stack(front, value[0]);
	else
		res = add_to_queue(front, value[0]);
	if (res < 0)
	{
		printf("L: %d :usage: push integer\n", ln);
		value[2] = 1;
	}
	return (0);
}
