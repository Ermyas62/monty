#include "monty.h"
/**
 * _rotr - rotate the stack to the bottom
 * @head: stack head
 * @counter: line number
 * Return: no return
 */
void _rotr(stack_t **head, __attribute__((unused)) unsigned int counter)
{
	stack_t *copy;

	copy = *head;
	if (*head == NULL || (*head)->next == NULL)
	{
		return;
	}
	while (copy->next)
	{
		copy = copy->next;
	}
	copy->next = *head;
	copy->prev->next = NULL;
	copy->prev = copy;
	(*head)->prev = copy;
	(*head) = copy;
}
