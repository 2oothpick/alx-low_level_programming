#include "lists.h"

/**
 * add_dnodeint_end - Adds new node at the end of list
 * @head: Pointer to the head of list
 * @n: Element in list
 * Return: New element or NULL if fail
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
    dlistint_t *new, *start;

    start = *head;
    new = malloc(sizeof(dlistint_t));

    if (new == NULL)
        return (NULL);

    if (*head == NULL)
    {
        new->next = NULL;
        new->n = n;
        new->prev = NULL;
        *head = new;
        return (new);
    }

    while (start->next)
    {
        start = start->next;
    }

    start->next = new;
    new->prev = start;
    new->next = NULL;
    new->n = n;
    return (new);
}
