#include "MergeSort.h"

list_t *MergeSort(list_t *list) {
  if (list->size_ == 1) {
    return list;
  }

  list_t *list_a = CreateList();
  node_t *tmp_list = list->head_;
  for (int i = 0; i < list->size_ / 2; i++) {
    PushBackList(list_a, tmp_list->data_);
    tmp_list = tmp_list->next_;
  }

  list_t *list_b = CreateList();
  for (int i = list->size_ / 2; i < list->size_; i++) {
    PushBackList(list_b, tmp_list->data_);
    tmp_list = tmp_list->next_;
  }

  list_a = MergeSort(list_a);
  list_b = MergeSort(list_b);

  return Merge(list_a, list_b);
}

list_t *Merge(list_t *list_a, list_t *list_b) {
  int tmp_a_size = list_a->size_, tmp_b_size = list_b->size_;
  list_t *list_c = CreateList();
  node_t *tmp_a = list_a->head_, *tmp_b = list_b->head_;
  while (tmp_a_size != 0 && tmp_b_size != 0) {
    if (tmp_a->data_ > tmp_b->data_) {
      PushBackList(list_c, tmp_b->data_);
      tmp_b = list_b->head_;
      list_b->head_ = list_b->head_->next_;
      delete (tmp_b);
      tmp_b = list_b->head_;
      tmp_b_size--;
    } else {
      PushBackList(list_c, tmp_a->data_);
      tmp_a = list_a->head_;
      list_a->head_ = list_a->head_->next_;
      delete (tmp_a);
      tmp_a = list_a->head_;
      tmp_a_size--;
    }
  }

  while (tmp_a_size != 0) {
    PushBackList(list_c, tmp_a->data_);
    tmp_a = list_a->head_;
    list_a->head_ = list_a->head_->next_;
    delete (tmp_a);
    tmp_a = list_a->head_;
    tmp_a_size--;
  }

  while (tmp_b_size != 0) {
    PushBackList(list_c, tmp_b->data_);
    tmp_b = list_b->head_;
    list_b->head_ = list_b->head_->next_;
    delete (tmp_b);
    tmp_b = list_b->head_;
    tmp_b_size--;
  }

  DeleteList(list_a);
  DeleteList(list_b);

  return list_c;
}