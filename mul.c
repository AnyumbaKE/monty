#include "monty.h"

/**
 * mul - divides the next top value by the top value
 * @stack: stack given by main
 * @line_number: line counter
 *
 * Return: void
 */
void mul(stack_t **stack, unsigned int line_number)
{
	int result;

	if (!stack || !*stack || !((*stack)->next))
	{
		fprintf(stderr, "L%d: can't mul, stack too short\n", line_number);
		exit(EXIT_FAILURE);
		return;
	}

	result = ((*stack)->next->n) * ((*stack)->n);
	pop(stack, line_cnt);
	(*stack)->n = result;
}
