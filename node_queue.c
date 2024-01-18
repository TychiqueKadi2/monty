#include "monty.h"
/**
 * addnode - add node to the head stack
 * @head: head of the stack
 * @n: new value
 * Return: none
 */
void addnode(stack_t **head, int n)
{

	stack_t *curr_node, *aux;

	aux = *head;
	curr_node = malloc(sizeof(stack_t));
	if (curr_node == NULL)
	{ printf("Error\n");
		exit(0); }
	if (aux)
		aux->prev = curr_node;
	curr_node->n = n;
	curr_node->next = *head;
	curr_node->prev = NULL;
	*head = curr_node;
}
#include "monty.h"
/**
 * monty_queue - prints the top
 * @head: stack head
 * @count: line_number
 * Return: no return
*/
void f_queue(stack_t **head, unsigned int count)
{
	(void)head;
	(void)count;
	bus.lifi = 1;
}
/**
 * addqueue - add node to the tail stack
 * @n: new value
 * @head: head of the stack
 * Return: none
*/
void addqueue(stack_t **head, int n)
{
	stack_t *curr_node, *aux;

	aux = *head;
	curr_node = malloc(sizeof(stack_t));
	if (curr_node == NULL)
	{
		printf("Error\n");
	}
	curr_node->n = n;
	curr_node->next = NULL;
	if (aux)
	{
		while (aux->next)
			aux = aux->next;
	}
	if (!aux)
	{
		*head = curr_node;
		curr_node->prev = NULL;
	}
	else
	{
		aux->next = curr_node;
		curr_node->prev = aux;
	}
}
