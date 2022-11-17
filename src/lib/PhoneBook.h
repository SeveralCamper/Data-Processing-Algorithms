#ifndef PHONE_BOOK_H_
#define PHONE_BOOK_H_

#include "ArrayProcessingMethods.h"

typedef struct phoneBook {
    int index_ = 0, age = 0;
    int *phone_numbers_;
    char *owner_name;
} phonebook_t;



#endif  // PHONE_BOOK_H_