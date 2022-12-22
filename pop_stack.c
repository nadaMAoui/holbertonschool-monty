#include "monty.h"
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
/**
 * delete_stack_head - delete the front of the queue
 */

int deQueue(stack_t **head)
{
	stack_t *tmp;

	if (*head == NULL)
		return (-1);
	tmp = (*head);
	if (tmp->next == NULL)
	{
		free(tmp);
		(*head) = NULL;
		return (1);
	}
	(*head) = (*head)->next;
	(*head)->prev = NULL;
	free(tmp);
	return (1);
}
/**
 * stk_pop - removes the top element of the stack
 */

void stack_pop(stack_t **stack, unsigned int ln)
{
	int result;

	result = deQueue(stack);
	if (result != 1)
	{
		printf("L%d: can't pop an empty stack\n", ln);
		value[2] = 1;
		return;
	}
}
