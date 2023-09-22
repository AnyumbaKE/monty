#include "monty.h"

/**
* rotl - rotates the first element of the stack
* @stack: stack head
* @line_count: line count
*
* Return: void
*/
void rotl(stack_t **stack, unsigned int line_count)
{
	stack_t *left;
	stack_t *right;

	(void) line_count;
	if (!stack || !*stack || !(*stack)->next)
		return;

	left = right = *stack;

	while (right->next)
		right = right->next;
	right->next = left;
	left->prev = right;
	*stack = left->next;
	(*stack)->prev->next = NULL;
	(*stack)->prev = NULL;
}
