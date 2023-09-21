#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>
#include "monty.h"

/**
 * add -  adds the first two nodes of the stack
 * @stack: stack given by main
 * @line_number: line counter
 *
 * Return: void
 */
void add(stack_t **stack, unsigned int line_number)
{
	int result;

	if (!stack || !*stack || !((*stack)->next))
	{
		fprintf(stderr, "L%d: can't add, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}

	result = ((*stack)->next->n) + ((*stack)->n);
	pop(stack, line_cnt);
	(*stack)->n = result;
}
