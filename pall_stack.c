#include "monty.h"
#include <string.h>
#include <stdio.h>
int print_stack(stack_t **head)
{
	stack_t *tmp;

	tmp = (*head);
	if (tmp == NULL)
		return (-1);
	while (tmp != NULL)
	{
		printf("%d\n", tmp->n);
		tmp = tmp->next;
	}
	return (0);
}

/**
 * stack_pall - a function that prints all data in the stack
 * @stack: the front of the stack
 * @ln: localisation of the opcode(the line number)
 */

void stack_pall(stack_t **stack, unsigned int line)
{
	int done;
    (void) line;
	
	done = print_stack(stack);
	if (done != 0)
	{
		;
	}
}
