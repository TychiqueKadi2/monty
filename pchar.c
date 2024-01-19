#include "monty.h"
/**
 * monty_pchar - prints the char at the top of the stack,
 * followed by a new line
 * @head: stack head
 * @count: line_number
 * Return: none
 */
void monty_pchar(stack_t **head, unsigned int count)
{
	stack_t *p;

	p = *head;
	if (!p)
	{
		fprintf(stderr, "L%d: can't pchar, stack empty\n", count);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	if (p->n > 127 || p->n < 0)
	{
		fprintf(stderr, "L%d: can't pchar, value out of range\n", count);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	printf("%c\n",p->n);
}
