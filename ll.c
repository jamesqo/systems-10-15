#include "ll.h"

#include <stdio.h>
#include <stdlib.h>

void print_list(struct node* list) {
    while (list) {
        printf("%d ", list->data);
        list = list->next;
    }
}

struct node* insert_front(struct node* list, int data) {
    struct node* new_list = malloc(sizeof(struct node));
    new_list->data = data;
    new_list->next = list;
    return new_list;
}

struct node* free_list(struct node* list) {
    while (list) {
        struct node* next = list->next;
        free(list);
        list = next;
    }
    return list;
}
