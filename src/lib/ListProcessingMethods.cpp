#include "ListProcessingMethods.h"

list_t *CreateList() {
    list_t *new_list = new list_t[1];
    if (new_list == nullptr) {
        printf("Error: Bad allocation!\n");
    } else {
        new_list->head_ = new_list->tail_ = NULL;
        new_list->size_ = 0;
    }

    return new_list;
}

void DeleteList(list_t *list) {
    if (list != nullptr) {
        node_t *tmp = list->head_;
        while(list->head_ != NULL) {
            list->head_ = list->head_->next_;
            delete(tmp);
            tmp = list->head_;
        }
        delete(list);
        list = nullptr;
    } else {
        printf("Error: List is also freed!\n");
    }
}

void PopBackList(list_t *list) {

}

void PopFrontList(list_t *list) {

}

void PushBackList(list_t *list, int data) {
    node_t *tmp = new node_t[1];
    if (tmp != nullptr) {
        tmp->data_ = data;
        tmp->next_ = nullptr;
        if (list->head_ == nullptr) {
            list->head_ = list->tail_ = tmp;
        } else {
            list->tail_->next_ = tmp;
        }
        list->size_++;
    }
}

void PushFrontList(list_t *list, int data) {
    node_t *tmp = new node_t[1];
    if (tmp != nullptr) {
        tmp->data_ = data;
        if (list->head_ == nullptr) {
            list->head_ = list->tail_ = tmp;
        } else {
            tmp->next_ = list->head_;
            list->head_->next_ = nullptr;
            list->head_ = tmp;
        }
    }
}