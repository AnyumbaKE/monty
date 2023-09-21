#include "monty.h"

/**
 * pchar - prints the int at the top of the stack as char
 * @stack: stack given by main
 * @line_number: amount of lines
 *
 * Return: void
 */
void pchar(stack_t **stack, unsigned int line_number)
{
	if (!stack || !(*stack))
	{
		fprintf(stderr, "L%d: can't pchar, stack empty\n", line_number);
		exit(EXIT_FAILURE);
		return;
	}
	if (isascii((*stack)->n) == 0)
	{
		fprintf(stderr, "L%d: can't pchar, value out of range\n", line_number);
		exit(EXIT_FAILURE);
		return;
	}
	printf("%c\n", (*stack)->n);
}