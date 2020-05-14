#include "monty.h"
/**
 * add - adds the top two elements of the stack
 * Description: adds the top two elements of the stack
 * @stack: working stack
 * @line_number: working line number
 * Return: nothing
 */

void add(stack_t **stack, unsigned int line_number)
{
	stack_t *q1, *q2;

	if (!*stack || !(*stack)->next)
	{
		fprintf(stderr, "L%d: can't add, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}

	(void)line_number;

	q1 = *stack;
	q1 = q1->next;
	q1->n += (*stack)->n;
	q1->prev = NULL;
	q2 = *stack;
	*stack = q2;
	free(q2);
}
