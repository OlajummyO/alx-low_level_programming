#include "lists.h"

size_t dlistint_len(const dlistint_t *h) 
{

    size_t node_count = 0;  // To keep track of the number of nodes

    // Traverse the linked list and count each node
    while (h != NULL) {
        h = h->next;  // Move to the next node
        node_count++;
    }

    return node_count;

}
