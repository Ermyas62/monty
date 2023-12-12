#include "mOnty.h"

/**
 * f_pint - prints the top
 * @head: stack head
 * @counter: line_number
 * Return: no return
 */

void f_pint(stack_t **head, unsigned int counter)
{
	if (*head == NULL)
	{
		fprint(stderr, "L%u: can't pint, stack empty\n", counter);
		fclose(bus.file);
		free(buse.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", (*head)->n);

