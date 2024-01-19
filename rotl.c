#include "monty.h"
/**
 *monty_rotl- rotates the stack to the top
 *@head: stack head
 *@count: line_number
 *Return: no return
 */
void monty_rotl(stack_t **head,  __attribute__((unused)) unsigned int count)
{
	stack_t *tmp = *head, *p;

	if (*head == NULL || (*head)->next == NULL)
	{
		return;
	}
	p = (*head)->next;
	p->prev = NULL;
	while (tmp->next != NULL)
	{
		tmp = tmp->next;
	}
	tmp->next = *head;
	(*head)->next = NULL;
	(*head)->prev = tmp;
	(*head) = p;
}
