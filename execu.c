#include "monty.h"
/**
 * execute - executes the opcode
 * @stack: head linked list - stack
 * @count: line counter
 * @file: poiner to monty file
 * @content: line content
 * Return: no return
 */
int execute(char *content, stack_t **stack, unsigned int count, FILE *file)
{
	instruction_t opst[] = {
				{"push", monty_push},
				{"pall", monty_pall},
				{"pint", monty_pint},
				{"pop", monty_pop},
				{"swap", monty_swap},
				{"add", monty_add},
				{"nop", monty_nop},
				{"sub", monty_sub},
				{"div", monty_div},
				{"mul", monty_mul},
				{"mod", monty_mod},
/**				{"pchar", monty_pchar},
				{"pstr", monty_pstr},
				{"rotl", monty_rotl},
				{"rotr", monty_rotr},
				{"queue", monty_queue},
				{"stack", monty_stack},
*/				{NULL, NULL}
				};
	unsigned int i = 0;
	char *p;

	p = strtok(content, " \n\t");
	if (p && p[0] == '#')
		return (0);
	bus.arg = strtok(NULL, " \n\t");
	while (opst[i].opcode && p)
	{
		if (strcmp(p, opst[i].opcode) == 0)
		{	opst[i].f(stack, count);
			return (0);
		}
		i++;
	}
	if (p && opst[i].opcode == NULL)
	{
		fprintf(stderr, "L%d: unknown instruction %s\n", count, p);
		fclose(file);
		free(content);
		free_stack(*stack);
		exit(EXIT_FAILURE);
	}
	return (1);
}
