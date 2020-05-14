#include "monty.h"
/**
 * _push - pushes an element to the stack
 * Description: pushes an element to the stack
 * @stack: working stack
 * @line_number: working line number
 * Return: nothing
 */
void _push(stack_t **stack, unsigned int line_number)
{
	stack_t *new_node;

	new_node = malloc(sizeof(stack_t));
	if (new_node == NULL)
	{
		fprintf(stderr, "Error: malloc failed\n");
		exit(EXIT_FAILURE);
	}

	(void)line_number;

	new_node->n = new_n;
	new_node->next = *stack;
	new_node->prev = NULL;
	if (*stack != NULL)
		(*stack)->prev = new_node;
	*stack = new_node;
}

/**
 * _pall - prints all the values on the stack
 * Description: prints all the values on the stack
 * @stack: working stack
 * @line_number: working line number
 * Return: nothing
 */

void _pall(stack_t **stack, unsigned int line_number)
{
	stack_t *q = *stack;
	(void) line_number;

	while (q != NULL)
	{
		printf("%d\n", q->n);
		q = q->next;
	}
}

