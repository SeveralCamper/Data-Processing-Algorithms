#ifndef LIST_PROCESSING_METHODS_H_
#define LIST_PROCESSING_METHODS_H_

#include <iostream>

typedef struct node {
    int data_;
    struct node *next_;
} node_t;

typedef struct list {
    int size_ = 0;
    node_t *head_;
    node_t *tail_;
} list_t;

list_t *CreateList();

void PopBackList(list_t *list);
void PopFrontList(list_t *list);
void PushBackList(list_t *list, int data);
void PushFrontList(list_t *list, int data);
void DeleteList(list_t *list);

#endif // LIST_PROCESSING_METHODS_H_