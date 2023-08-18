#include "lists.h"

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n) {
    if (h == NULL) {
        return NULL;
    }

    // Create a new node
    dlistint_t *new_node = (dlistint_t *)malloc(sizeof(dlistint_t));
    if (new_node == NULL) {
        return NULL;  // Return NULL if memory allocation fails
    }
    new_node->n = n;

    if (idx == 0) {
        new_node->prev = NULL;
        new_node->next = *h;
        if (*h != NULL) {
            (*h)->prev = new_node;
        }
        *h = new_node;
        return new_node;
    }

    dlistint_t *current = *h;
    unsigned int current_idx = 0;

    while (current != NULL && current_idx < idx - 1) {
        current = current->next;
        current_idx++;
    }

    if (current == NULL) {
        free(new_node); // Cleanup allocated memory
        return NULL;
    }

    new_node->prev = current;
    new_node->next = current->next;

    if (current->next != NULL) {
        current->next->prev = new_node;
    }

    current->next = new_node;

    return new_node;
}
