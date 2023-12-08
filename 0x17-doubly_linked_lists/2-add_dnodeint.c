#include "lists.h"
dlistint_t *add_dnodeint(dlistint_t **head, const int n) {
    /* Create a new node*/
    dlistint_t *new_node = (dlistint_t *)malloc(sizeof(dlistint_t));
    if (new_node == NULL) {
        return NULL;  /* Return NULL if memory allocation fails*/
    }

    /* Set the values of the new node */
    new_node->n = n;
    new_node->prev = NULL;
    new_node->next = *head;  /* The next of the new node should point to the current head*/

    if (*head != NULL) {
        (*head)->prev = new_node;  /* Update the previous of the current head */
    }

    *head = new_node;  /* Update the head to point to the new node*/

    return new_node;
}
