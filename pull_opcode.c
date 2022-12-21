#include "monty.h"
/**
 * stack_pall - a function that prints all data in the stack
 * @stack: the front of the stack
 * @ln: localisation of the opcode(the line number)
 */
int stack_pall(stack_t **stack, unsigned int ln)
{
	int rez;

	rez = print_stack(stack);
	if (rez != 0)
	{
		; // skip
	}
	return(0);
}
