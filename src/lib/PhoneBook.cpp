#include "PhoneBook.h"

phonebooknode_t PhoneBookAgeSearch(phonebook_t *phone_book, int age) {
    int returned_index = 0;
    int left = 0, middle = 0, right = phone_book->phone_book_[phone_book->length_ - 1].index_;
    while (left <= right) {
        middle = (left + right) / 2;
        if (phone_book->phone_book_[middle].age_ == age) {
            returned_index = middle;
            break;
        } else if (phone_book->phone_book_[middle].age_ < age) {
            left = middle + 1;
        } else {
            right = middle - 1;
        }
    }

    return phone_book->phone_book_[returned_index];
}

phonebooknode_t PhoneBookIndexSearch(phonebook_t *phone_book, int index) {
    int returned_index = 0;
    int left = 0, middle = 0, right = phone_book->phone_book_[phone_book->length_ - 1].index_;
    while (left <= right) {
        middle = (left + right) / 2;
        if (phone_book->phone_book_[middle].index_ == index) {
            returned_index = middle;
            break;
        } else if (phone_book->phone_book_[middle].index_ < index) {
            left = middle + 1;
        } else {
            right = middle - 1;
        }
    }

    return phone_book->phone_book_[returned_index];
}

phonebooknode_t InitPhoneBookNode(int index, int age, int phone_numbers[], char owner_name[]) {
    phonebooknode_t node;
    node.age_ = age;
    node.index_ = index;
    for (int i = 0; i < 25; i++) {
        if (i < 11) {
            node.phone_numbers_[i] = phone_numbers[i];
            node.owner_name_[i] = owner_name[i];  
        } else {
            node.owner_name_[i] = owner_name[i];
        }
    }

    return node;
}

void PhoneBookPopBack(phonebook_t *phone_book) {
    phone_book->length_ = phone_book->length_ - 1;
    phonebooknode_t phone_book_tmp[phone_book->length_];
    for (int i = 0; i < phone_book->length_; i++) {
        phone_book_tmp[i].age_ = phone_book->phone_book_[i].age_;
        phone_book_tmp[i].index_ = phone_book->phone_book_[i].index_;
        for (int j = 0; j < 11; j++) {
            phone_book_tmp[i].phone_numbers_[j] = phone_book->phone_book_[i].phone_numbers_[j];
        }

        for (int j = 0; j < 25; j++) {
            phone_book_tmp[i].owner_name_[j] = phone_book->phone_book_[i].owner_name_[j];
        }
    }

    phone_book_tmp[phone_book->length_ + 1].age_ = 0;
    phone_book_tmp[phone_book->length_ + 1].index_ = 0;
    for (int i = 0; i < 10; i++) {
        phone_book->phone_book_[i] = phone_book_tmp[i];
    }
}

void InitPhoneBook(phonebook_t *phone_book, int length) {
    phone_book->length_ = length;
    char new_name[25];
    int new_telephone_num[11];
    for (int i = 0; i < length; i++) {
        new_telephone_num[0] = 8;
        new_name[0] = 'A';
        for (int j = 1; j < 25; j++) {
            if (j < 11) {
                new_telephone_num[j] = random(10);
                new_name[j] = 'a' + j;
            } else {
                new_name[j] = 'a' + j;
            }
        }
        phone_book->phone_book_[i] = InitPhoneBookNode(i, random(60), new_telephone_num, new_name);
    }
}

void PhoneBookPushBack(phonebook_t *phone_book, phonebooknode_t phobe_book_node) {
    phone_book->length_ = phone_book->length_ + 1;
    phonebooknode_t phone_book_tmp[phone_book->length_];
    for (int i = 0; i < phone_book->length_ - 1; i++) {
        phone_book_tmp[i] = phone_book->phone_book_[i];
    }
    phone_book_tmp[phone_book->length_ - 1] = phobe_book_node;

    for (int i = 0; i < 10; i++) {
        phone_book->phone_book_[i] = phone_book_tmp[i];
    }
}

void PrintPhoneBookNode(phonebooknode_t *phone_book_node) {
    if (phone_book_node == nullptr) {
        std::cout << "It's empty!" <<std::endl;
    } else {
        std::cout << "Index: " << phone_book_node->index_ << std::endl;
        std::cout << "Age: " << phone_book_node->age_ << std::endl;
        PrintMas(phone_book_node->phone_numbers_, 11);
        PrintMasChar(phone_book_node->owner_name_, 25);
        std::cout << std::endl;   
    } 
}

void PrintPhoneBook(phonebook_t *phone_book) {
    if (phone_book == nullptr) {
        std::cout << "It's empty!" <<std::endl;
    } else {
        for (int i = 0; i < phone_book->length_; i++) {
            PrintPhoneBookNode(&phone_book->phone_book_[i]);
        }
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
