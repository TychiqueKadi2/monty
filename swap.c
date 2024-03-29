#include "monty.h"
/**
 * monty_swap - adds the top two elements of the stack.
 * @head: stack head
 * @count: line_number
 * Return: none
*/
void monty_swap(stack_t **head, unsigned int count)
{
	stack_t *p;
	int len = 0, aux;

	p = *head;
	while (p)
	{
		p = p->next;
		len++;
	}
	if (len < 2)
	{
		fprintf(stderr, "L%d: can't swap, stack too short\n", count);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	p = *head;
	aux = p->n;
	p->n = p->next->n;
	p->next->n = aux;
}
