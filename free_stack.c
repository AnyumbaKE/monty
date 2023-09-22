#include <stdio.h>
#include <stdlib.h>
#include "monty.h"

/**
 * free_stack - frees a dlistint_t linked list
 * @stack: list head
 * Return: void
 */
void free_stack(stack_t *stack)
{
	stack_t *current = stack;
	stack_t *next;

	if (stack)
	{
		next = stack->next;
		while (current)
		{
			free(current);
			current = next;
			if (next)
				next = next->next;
		}
	}
}
