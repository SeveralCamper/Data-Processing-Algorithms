#ifndef PHONE_BOOK_H_
#define PHONE_BOOK_H_

#include "ArrayProcessingMethods.h"

typedef struct phoneBookNode {
    int index_ = 0, age_ = 0;
    int *phone_numbers_;
    char *owner_name_;
} phonebooknode_t;

typedef struct phoneBook{
    phonebooknode_t *phone_book_;
} phonebook_t;

phonebooknode_t PhoneBookAgeSearch(phonebook_t *phone_book, int age);
phonebooknode_t PhoneBookIndexSearch(phonebook_t *phone_book, int index);
phonebooknode_t InitPhoneBookNode(int index, int age, int phone_numbers[], char owner_name[]);

void PhoneBookSort(phonebook_t *phone_book);
void PhoneBookPopBack(phonebooknode_t phobe_book_node);
void SelectSortAge(phonebook_t *phone_book, int length);
void InitPhoneBook(phonebook_t *phone_book, int length);
void PhoneBookPushBack(phonebooknode_t phobe_book_node);
void PrintPhoneBook(phonebook_t *phone_book, int length);
void SelectSortIndex(phonebook_t *phone_book, int length);

#endif  // PHONE_BOOK_H_