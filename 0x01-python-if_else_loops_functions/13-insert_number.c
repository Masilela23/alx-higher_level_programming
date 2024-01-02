#include "lists.h"

/**
 * insert_node - this functn inserts a number
 * into a sorted singly-linked list.
 *
 * @head: A pointer the head of the linked list.
 *
 * @number: The number to insert.
 *
 * Return: 0 If the function fails or pointer to the new node.
 */

listint_t *insert_node(listint_t **head, int number)
{
	listint_t *node = *head, *mel;

	mel = malloc(sizeof(listint_t));

	if (mel == NULL)
		return (NULL);

	mel->n = number;

	if (node == NULL || node->n >= number)

	{

		mel->next = node;
		*head = mel;

		return (mel);

	}

	while (node && node->next && node->next->n < number)
		node = node->next;

	mel->next = node->next;
	node->next = mel;

	return (mel);
}
