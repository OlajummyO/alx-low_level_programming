#include "lists.h"

int sum_dlistint(dlistint_t *head) {
    int sum = 0;

    /* Traverse the list and accumulate the sum */
    while (head != NULL) {
        sum += head->n;
        head = head->next;
    }

    return sum;
}
