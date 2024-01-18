#include "monty.h"
/**
 * f_sub- sustration
 * @head: stack head
 * @counter: line_number
 * Return: none
 */
void monty_sub(stack_t **head, unsigned int count)
{
	stack_t *aux;
	int p, node;

	aux = *head;
	for (node = 0; aux != NULL; node++)
		aux = aux->next;
	if (node < 2)
	{
		fprintf(stderr, "L%d: can't sub, stack too short\n", count);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	aux = *head;
	p = aux->next->n - aux->n;
	aux->next->n = p;
	*head = aux->next;
	free(aux);
}
