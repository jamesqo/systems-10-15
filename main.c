#include "ll.h"

#include <stddef.h>
#include <stdio.h>

int main() {
    struct node* list = insert_front(
            insert_front(
                insert_front(
                    insert_front(NULL, 3), 1), 4), 1);

    print_list(list);
    list = free_list(list);

    printf("This should be null: %p\n", list);

    return 0;
}
