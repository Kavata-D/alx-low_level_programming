#include <stdio.h>
#include <stdlib.h>

/* Define the struct for a node in the linked list */
typedef struct list_t {
    char *str;
    struct list_t *next;
} list_t;

/* funtction is to print all the elements of the linked list */
size_t print_list(const list_t *h) {
    size_t node_count = 0;

    while (h != NULL) {
        if (h->str == NULL) {
            printf("[0] (nil)\n");
        } else {
            printf("[%lu] %s\n", node_count, h->str);
        }

        h = h->next;
        node_count++;
    }

    return node_count;
}
