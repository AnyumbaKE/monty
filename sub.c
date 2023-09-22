#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>
#include "monty.h"

/**
 * _sub -  substracts the first two nodes of the stack
 * @stack: stack given by main
 * @line_number: line counter
 *
 * Return: void
 */
void _sub(stack_t **stack, unsigned int line_number)
{
	int result;

	if (!stack || !*stack || !((*stack)->next))
	{
		fprintf(stderr, "L%d: can't sub, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}

	result = ((*stack)->next->n) - ((*stack)->n);
	pop(stack, line_number);
	(*stack)->n = result;
}
