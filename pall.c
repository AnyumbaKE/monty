#include "monty.h"

/**
 * pall - prints the stack
 * @stack: stack given by main in start.c
 * @line_number: amount of lines
 * Return: void
 */
void pall(stack_t **stack, unsigned int line_number __attribute__((unused)))
{
	print_stack(*stack);
}
