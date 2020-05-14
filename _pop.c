#include "monty.h"
/**
 * _pop - removes the top element of the stack
 * Description: removes the top element of the stack
 * @stack: working stack
 * @line_number: working number line
 * Return: nothing
 */

void _pop(stack_t **stack, unsigned int line_number)
{
	if (*stack == NULL)
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", line_number);
		exit(EXIT_FAILURE);
	}
	if ((*stack)->next != NULL)
		(*stack)->next->prev = NULL;
	*stack = (*stack)->next;
}
