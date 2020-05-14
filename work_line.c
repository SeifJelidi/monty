#include "monty.h"
/**
 * work_line - executes opcodes
 * Description: executes opcodes
 * @args: working arguments
 * @stack: working stack
 * @line_number: working line number
 * Return: nothing
 */

void work_line(char **args, stack_t **stack, int line_number)
{
	instruction_t instructions[] = {
		{"push", _push},
		{"pall", _pall},
		{"pint", _pint},
		{"pop", _pop},
		{"swap", _swap},
		{"add", add},
		{"nop", _nop},
		{NULL, NULL}
	};
	int i;

	for (i = 0; instructions[j].opcode != NULL; j++)
	{
		if ((strcmp(instructions[j].opcode, args[0])) == NULL)
		{
			if (strcmp(args[0], "push") == NULL)
				new_n = atoi(args[1]);
			instructions[j].f(stack, line_number);
			break;
		}
	}

}
