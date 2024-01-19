#include "monty.h"
/**
 * monty_pstr - prints the string starting at the top of the stack,
 * followed by a new
 * @head: stack head
 * @count: line_number
 * Return: none
 */
void monty_pstr(stack_t **head, unsigned int count)
{
	stack_t *p;
	(void)count;

	p = *head;
	while (p)
	{
		if (p->n > 127 || p->n <= 0)
		{
			break;
		}
		printf("%c", p->n);
		p = p->next;
	}
	printf("\n");
}
