#include "ListProcessingMethods.h"

int CountListData(list_t *list) {
    int count = 0;
    if (list != nullptr) {
        node_t *tmp = list->head_;
        count += tmp->data_;
        while (tmp->next_ != nullptr) {
            count += tmp->next_->data_;
            tmp = tmp->next_;
        }   
    }

    return count;
}

bool IsEmptyList(list_t *list) {
    return list->head_ == nullptr;
}

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
    node_t *tmp = new Node(data);
    if (IsEmptyList(list)) {
        list->head_ = list->tail_ =  tmp;
    } else {
        list->tail_->next_ = tmp;
        list->tail_ = tmp;
    }
    list->size_++;
}

void PushFrontList(list_t *list, int data) {
    node_t *tmp = new Node(data);
    if (IsEmptyList(list)) {
        list->head_ = list->tail_ =  tmp;
    } else {
        tmp->next_ = list->head_;
        list->head_ = tmp;
    }
    list->size_++;
}

void FillIncList(list_t *list) {
    if (list != nullptr) {
        int inc = 0;
        node_t *tmp = list->head_;
        tmp->data_ = inc;
        inc++;
        while (tmp->next_ != nullptr) {
            tmp->next_->data_ = inc;
            tmp = tmp->next_;
            inc++;
        }
    }
}

void FillDecList(list_t *list) {
    if (list != nullptr) {
        int dec = list->size_ - 1;
        node_t *tmp = list->head_;
        tmp->data_ = dec;
        dec--;
        while (tmp->next_ != nullptr) {
            tmp->next_->data_ = dec;
            tmp = tmp->next_;
            dec--;
        }
    }
}

void FillRandList(list_t *list) {
    if (list != nullptr) {
        int rand = std::rand() % 1000;
        node_t *tmp = list->head_;
        tmp->data_ = rand;
        rand = std::rand() % 1000;
        while (tmp->next_ != nullptr) {
            tmp->next_->data_ = rand;
            tmp = tmp->next_;
            rand = std::rand() % 1000;
        }   
    }
}

void PrintList(list_t *list) {
    if (IsEmptyList(list)) {
        printf("List is empty!\n");
    } else {
        node_t *tmp = list->head_;
        while(tmp != nullptr) {
            std::cout << tmp->data_ << " ";
            tmp = tmp->next_;
        }
        std::cout << std::endl;
    }
}

node_t* FindNode(list_t *list, int data) {
    node_t* tmp = list->head_;
    while (tmp && tmp->data_ != data) tmp = tmp->next_;
		return (tmp && tmp->data_ == data) ? tmp : nullptr;
}