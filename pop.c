#include "monty.h"
/**
 * monty_pop - prints the top
 * @head: stack head
 * @count: line_number
 * Return: no return
*/
void monty_pop(stack_t **head, unsigned int count)
{
	stack_t *p;

	if (*head == NULL)
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", count);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	p = *head;
	*head = p->next;
	free(p);
}
