#ifndef LIST_PROCESSING_METHODS_H_
#define LIST_PROCESSING_METHODS_H_

#include <iostream>

typedef struct Node {
    int data_;
    struct Node *next_;
    Node(int data) : data_(data) {};
} node_t;

typedef struct List {
    int size_ = 0;
    node_t *head_;
    node_t *tail_;

    List() : head_(nullptr), tail_(nullptr) {};
} list_t;

int CountListData(list_t *list);

bool IsEmptyList(list_t *list);

node_t *PopBackList(list_t *list);
node_t *PopFrontList(list_t *list);
node_t *FindNode(list_t *list, int data);

list_t *CreateList();

void PrintList(list_t *list);
void DeleteList(list_t *list);
void FillIncList(list_t *list);
void FillDecList(list_t *list);
void FillRandList(list_t *list);
void PushBackList(list_t *list, int data);
void PushFrontList(list_t *list, int data);

#endif // LIST_PROCESSING_METHODS_H_