#include "monty.h"

/**
 * check_argc - check number of args are correct or not
 * @argc: argument count
 */

void check_argc(int argc)
{
	if (argc != 2)
	{
		printf("USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
}

/**
 * check_valid_file - Check if file given is valid
 * @filename: path to file
 */

void check_valid_file(char *filename)
{
	char *ext;

	ext = strrchr(filename, '.');
	if (ext == NULL)
		return;
	if (!(strcmp(".txt", ext) == 0 || strcmp(".m", ext) == 0))
	{
		printf("Error: Can't open file %s\n", filename);
		exit(EXIT_FAILURE);
	}
}

/**
 * check_file_stream - Check if file stream is valid
 * @fp: file stream
 * @filename: name of the  file
 */

void check_file_stream(FILE *fp, char *filename)
{
	if (fp == NULL)
	{
		printf("Error: Can't open file %s\n", filename);
		exit(EXIT_FAILURE);
	}
}

/**
 * check_opcode - Check if opcode function pointer is NULL
 * @opcode: pointer to the opcode func
 * @line_number: line number
 * @cmd: command given by the user
 */

void check_opcode(void (*opcode)(), int line_number, char *cmd)
{
	if (opcode == NULL)
	{
		printf("L%d: unknown instruction %s\n", line_number, cmd);
		value[2] = 1;
		return;
	}
}

/**
 * check_fail - check if it fails free memory and exit
 * @line: buffer
 * @fp: file stream
 * @head: head
 */

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
