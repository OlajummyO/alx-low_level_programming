#include "lists.h"

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index) {
    // Traverse the list to the desired index or until the end of the list
    unsigned int current_index = 0;
    while (head != NULL && current_index < index) {
        head = head->next;
        current_index++;
    }

    // Return the node at the specified index or NULL if not found
    return head;
}
