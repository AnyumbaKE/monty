#include <stdio.h>
#include <stdlib.h>
#include "monty.h"

/**
 * queue_node - adds a node to a stack_t stack in queue_node
 * @stack: stack head
 * @n: number of the node
 * Return: newly created node, if memory allocation fails, the function will
 * return NULL.
 */
stack_t *queue_node(stack_t **stack, const int n)
{
	stack_t *new = malloc(sizeof(stack_t));
	stack_t *current = *stack;

	if (!new)
	{
		free(new);
		return (NULL);
	}
	new->n = n;

	if (!*stack)
	{
		new->next = NULL;
		new->prev = NULL;
		*stack = new;
		return (new);
	}

	while (current)
	{
		if (!current->next)
		{
			new->next = NULL;
			new->prev = current;
			current->next = new;
			break;
		}
		current = current->next;
	}

	return (new);
}

