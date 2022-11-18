#include "PhoneBook.h"

phonebooknode_t PhoneBookAgeSearch(phonebook_t *phone_book, int age) {
    phonebooknode_t node;

    return node;
}

phonebooknode_t PhoneBookIndexSearch(phonebook_t *phone_book, int index) {
    phonebooknode_t node;

    return node;
}

phonebooknode_t InitPhoneBookNode(int index, int age, int *phone_numbers, char *owner_name) {
    phonebooknode_t node;
    node.age_ = age;
    node.index_ = index; 
    node.phone_numbers_ = phone_numbers; 
    node.owner_name_ = owner_name; 

    return node;
}

void PhoneBookPopBack(phonebook_t *phone_book) {
    phone_book->phone_book_[phone_book->length_ - 1].age_ = 0;
    phone_book->phone_book_[phone_book->length_ - 1].index_ = 0;
    delete(phone_book->phone_book_[phone_book->length_ - 1].owner_name_);
    delete(phone_book->phone_book_[phone_book->length_ - 1].phone_numbers_);
    for (int i = 0; i < phone_book->length_ - 1; i++) {

    }
}

void InitPhoneBook(phonebook_t *phone_book, int length) {
    phone_book->length_ = length;
    phone_book->phone_book_ = new phonebooknode_t[length];
    for (int i = 0; i < length; i++) {
        int *new_telephone_num = new int[11];
        char *new_name = new char[25];
        new_telephone_num[0] = 8;
        new_name[0] = 'A';
        for (int j = 1; j < 11; j++) {
            std::cout << i << std::endl;
            new_telephone_num[j] = random(10);
            new_name[j] = 'a' + j;
        }
        phone_book->phone_book_[i] = InitPhoneBookNode(i, random(60), new_telephone_num, new_name);
    }
}

void PhoneBookPushBack(phonebook_t *phone_book, phonebooknode_t phobe_book_node) {

}

void PrintPhoneBook(phonebook_t *phone_book) {
    for (int i = 0; i < phone_book->length_; i++) {
        std::cout << "Index: " << phone_book->phone_book_[i].index_ << std::endl;
        std::cout << "Age: " << phone_book->phone_book_[i].age_ << std::endl;
        PrintMas(phone_book->phone_book_[i].phone_numbers_, 11);
        PrintMasChar(phone_book->phone_book_[i].owner_name_, 25);
        std::cout << std::endl;
    }
}

void SelectSortAge(phonebook_t *phone_book) {
	int minArrayIndex;
    for (int i = 0; i < phone_book->length_ - 1; i++) {
        minArrayIndex = i;
        for (int j = i + 1; j < phone_book->length_; j++) {
            if (phone_book->phone_book_[j].age_ < phone_book->phone_book_[minArrayIndex].age_) {
                minArrayIndex = j;
            }
        }
        phonebooknode_t tmp_book = phone_book->phone_book_[minArrayIndex];
        phone_book->phone_book_[minArrayIndex] = phone_book->phone_book_[i];
        phone_book->phone_book_[i] = tmp_book;
    }
}

void SelectSortIndex(phonebook_t *phone_book) {
	int minArrayIndex;
    for (int i = 0; i < phone_book->length_ - 1; i++) {
        minArrayIndex = i;
        for (int j = i + 1; j < phone_book->length_; j++) {
            if (phone_book->phone_book_[j].index_ < phone_book->phone_book_[minArrayIndex].index_) {
                minArrayIndex = j;
            }
        }
        phonebooknode_t tmp_book = phone_book->phone_book_[minArrayIndex];
        phone_book->phone_book_[minArrayIndex] = phone_book->phone_book_[i];
        phone_book->phone_book_[i] = tmp_book;
    }
}