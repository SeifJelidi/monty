#include "monty.h"
/**
 * _swap - swaps the top two elements of the stack
 * Description: swaps the top two elements of the stack
 * @stack: working stack
 * @line_number: working line number
 * Return: nothing
 */

void _swap(stack_t **stack, unsigned int line_number)
{
	stack_t *q;

	if (*stack == NULL || (*stack)->next == NULL)
	{
		fprintf(stderr, "L%d: can't swap, stack too short\n", line_number);
		free_s(*stack);
		exit(EXIT_FAILURE);
	}
	q = (*stack)->next;
	(*stack)->prev = q;
	(*stack)->next = q->next;
	q->prev = NULL;
	if (q->next != NULL)
		(q->next)->prev = *stack;
	q->next = *stack;
	*stack = q;
}
