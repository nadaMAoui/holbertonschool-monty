#include "monty.h"

int check_if_push(char *tok_line[], int lineno)
{
	if (strcmp(tok_line[0], "push") == 0)
	{
		if (tok_line[1][0] != '\0' && check_if_number(tok_line[1]))
			value[0] = atoi(tok_line[1]);
		else
		{
			printf("L%d: usage: push integer\n", lineno);
			value[2] = 1;
			return (0);
		}

		return (1);
	}
	return (0);
}
//
void check_data_structure(char *opcode)
{
	if (strcmp(opcode, "stack") == 0)
		value[1] = 0;
	else if (strcmp(opcode, "queue") == 0)
		value[1] = 1;
}
//
void (*get_opcode_func(char *s))(stack_t **stack, unsigned int ln)
{

	int i;
	instruction_t stack[] = {
		{"pall", stack_pall},
		{"push", stack_push},
		{"pop", stack_pop},
		{"add", stack_add},
		{"pint", stack_pint},
		{"stack", stack_add},
		{NULL, NULL}
	};

	i = 0;
	while (i < 17)
	{
		if (strcmp(s, (stack[i]).opcode) == 0)
		{
			return (*(stack[i]).f);
		}
		i++;
	}
	return (NULL);
}
//
void check_file_stream(FILE *fp, char *filename)
{
	if (fp == NULL)
	{
		printf("Error: Can't open file %s\n", filename);
		exit(EXIT_FAILURE);
	}
}
//
void check_fail(char *line, FILE *fp, stack_t *head)
{
	if (value[2] == 1)
	{
		free(line);
		fclose(fp);
		free_stack(head);
		exit(EXIT_FAILURE);
	}
}
//
void check_opcode(void (*opcode)(), int lineno, char *cmd)
{
	if (opcode == NULL)
	{
		printf("L%d: unknown instruction %s\n", lineno, cmd);
		value[2] = 1;
		return;
	}
}
//
void clear_strings(char *tokens[])
{
	int i;

	for (i = 0; tokens[i]; i++)
		tokens[i][0] = '\0';
}
//
int check_empty(const char *s)
{
	while (*s != '\0')
	{
		if (!isspace((unsigned char)*s))
			return (0);
		s++;
	}
	return (1);
}

