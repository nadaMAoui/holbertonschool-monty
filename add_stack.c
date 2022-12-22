#include "monty.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * 
*/
void stack_add(stack_t **stack, unsigned int ln)
{
	stack_t *tmp;
	stack_t *tmp_1;

	if ((*stack) == NULL || (*stack)->next == NULL)
	{
		printf("L%d: can't add, stack too short\n", ln);
		value[2] = 1;
		return;
	}
	tmp = (*stack);
	tmp_1 = tmp->next;
	tmp->n = tmp->next->n + tmp->n;
	tmp->next = tmp_1->next;
	if (tmp_1->next != NULL)
		tmp_1->next->prev = tmp;
	else
		tmp->next = NULL;
	free(tmp_1);
}
