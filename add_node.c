#include <stdio.h>
#include <stdlib.h>
#include "monty.h"

/**
 * add_node - adds a node to the start of a stack_t stack
 * @stack: stack head
 * @n: number for the new node
 *
 * Return: newly created node, if creation fails, the
 * function will return NULL.
 */
stack_t *add_node(stack_t **stack, const int n)
{
	stack_t *new = malloc(sizeof(stack_t));

	if (!new)
	{
		fprintf(stderr, "Error: malloc failed\n");
		free(new);
		return (NULL);
	}
	new->n = n;

	new->next = *stack;
	new->prev = NULL;
	if (*stack)
		(*stack)->prev = new;

	*stack = new;

	return (new);
}
