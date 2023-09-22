#include <stdio.h>
#include <stdlib.h>
#include "monty.h"

/**
 * pstr - prints the contents of a stack_t stack as a string
 * @stack: stack given by main
 * @line_number: line counter for error messages
 *
 * Return: nothing
 */
void pstr(stack_t **stack, unsigned int line_number __attribute__((unused)))
{
	stack_t *current = *stack;

	while (current)
	{
		if (current->n <= 0 || current->n > 127)
			break;
		putchar((char) current->n);
		current = current->next;
	}
	putchar('\n');
}
