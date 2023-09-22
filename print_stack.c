#include <stdio.h>
#include <stdlib.h>
#include "monty.h"

/**
 * print_stack - prints the contents of a stack_t stack
 * @stack: stack head
 *
 * Return: number of elements of the list
 */
size_t print_stack(const stack_t *stack)
{
	size_t c = 0;

	while (stack)
	{
		printf("%d\n", stack->n);
		stack = stack->next;
		c++;
	}

	return (c);
}
