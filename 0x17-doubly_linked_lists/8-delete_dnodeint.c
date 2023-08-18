#include "lists.h"

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index) {
    if (head == NULL || *head == NULL) {
        return -1;  // Failed due to empty list
    }

    dlistint_t *current = *head;
    unsigned int current_idx = 0;

    // Handle deletion at index 0
    if (index == 0) {
        *head = current->next;
        if (*head != NULL) {
            (*head)->prev = NULL;
        }
        free(current);
        return 1;  // Successfully deleted node at index 0
    }

    // Traverse to the node at the specified index
    while (current != NULL && current_idx < index) {
        current = current->next;
        current_idx++;
    }

    if (current == NULL) {
        return -1;  // Failed due to invalid index
    }

    // Update the previous node's next pointer
    if (current->prev != NULL) {
        current->prev->next = current->next;
    }

    // Update the next node's prev pointer
    if (current->next != NULL) {
        current->next->prev = current->prev;
    }

    free(current);
    return 1;  // Successfully deleted node at the specified index
}
