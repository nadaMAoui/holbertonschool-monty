#include "monty.h"

/**
 * get_opcode_func - selects the correct function to execute it
 * @s: opcode passed to the program
 * Return: pointer to the function given (NULL if not found)
 */

void (*get_opcode_func(char *s))(stack_t **stack, unsigned int ln)
{

	int i;
	instruction_t stk[] = {
		{"pall", stk_pall},
		{"push", stk_push},
		{"pop", stk_pop},
		{"add", stk_add},
		{"pint", stk_pint},
		{"queue", stk_queue},
		{"stack", stk_stack},
		{NULL, NULL}
	};

	i = 0;
	while (i < 11)
	{
		if (strcmp(s, (stk[i]).opcode) == 0)
		{
			return (*(stk[i]).f);
		}
		i++;
	}
	return (NULL);
}
