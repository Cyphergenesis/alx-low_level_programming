#include <stdio.h>
#include "lists.h"
#include <unistd.h>

/**
 *print_list - prints out all the elements on linked list
 *@h: pointer to a node
 *
 *Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t count = 0;

	if (!h->str)
		printf("[0] (nil)\n");
	while (h != NULL)
	{
		count++;
		printf("[%u] %s\n", h->len, h->str);
		h = h->next;
	}
	printf("\n");

	return (count);
}
