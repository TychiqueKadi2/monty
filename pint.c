#include "monty.h"
/**
 * monty_pint - prints the top
 * @head: stack head
 * @count: line_number
 * Return: none
*/
void monty_pint(stack_t **head, unsigned int count)
{
	if (*head == NULL)
	{
		fprintf(stderr, "L%u: can't pint, stack empty\n", count);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", (*head)->n);
}
