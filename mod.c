#include "monty.h"
/**
 * monty_mod - computes the rest of the division of the second
 * top element of the stack by the top element of the stack
 * @head: stack head
 * @count: line_number
 * Return: none
 */
void monty_mod(stack_t **head, unsigned int count)
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
		fprintf(stderr, "L%d: can't mod, stack too short\n", count);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	p = *head;
	if (p->n == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", count);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	aux = p->next->n % p->n;
	p->next->n = aux;
	*head = p->next;
	free(p);
}
