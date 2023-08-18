#include "lists.h"


void free_dlistint(dlistint_t *head) {
    // Traverse the list and free each node
    while (head != NULL) {
        dlistint_t *temp = head;  // Store the current node
        head = head->next;  // Move to the next node
        free(temp);  // Free the memory occupied by the current node
    }
}
