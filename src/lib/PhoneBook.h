#ifndef PHONE_BOOK_H_
#define PHONE_BOOK_H_

#include "ArrayProcessingMethods.h"

typedef struct phoneBookNode {
  int index_ = 0, age_ = 0;
  int phone_numbers_[11];
  char owner_name_[25];
} phonebooknode_t;

typedef struct phoneBook {
  int length_ = 0;
  phonebooknode_t phone_book_[10];
} phonebook_t;

phonebooknode_t PhoneBookAgeSearch(phonebook_t *phone_book, int age);
phonebooknode_t PhoneBookIndexSearch(phonebook_t *phone_book, int index);
phonebooknode_t InitPhoneBookNode(int index, int age, int phone_numbers[],
                                  char owner_name[]);

void SelectSortAge(phonebook_t *phone_book);
void PrintPhoneBook(phonebook_t *phone_book);
void SelectSortIndex(phonebook_t *phone_book);
void PhoneBookPopBack(phonebook_t *phone_book);
void InitPhoneBook(phonebook_t *phone_book, int length);
void PrintPhoneBookNode(phonebooknode_t *phone_book_node);
void PhoneBookPushBack(phonebook_t *phone_book,
                       phonebooknode_t phobe_book_node);

#endif  // PHONE_BOOK_H_