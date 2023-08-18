#include "lists.h"

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n) {
    // Create a new node
    dlistint_t *new_node = (dlistint_t *)malloc(sizeof(dlistint_t));
    if (new_node == NULL) {
        return NULL;  // Return NULL if memory allocation fails
    }

    // Set the values of the new node
    new_node->n = n;
    new_node->next = NULL;  // The next of the new node should be NULL

    if (*head == NULL) {
        new_node->prev = NULL;  // If list is empty, new node is the only node
        *head = new_node;  // Update the head to point to the new node
        return new_node;
    }

    // Traverse to the end of the list
    dlistint_t *current = *head;
    while (current->next != NULL) {
        current = current->next;
    }

    // Update pointers for the last node and the new node
    current->next = new_node;
    new_node->prev = current;

    return new_node;
}
