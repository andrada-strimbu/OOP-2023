//
// Created by Andrada on 19/05/2023.
//

#include "Book.h"

int Book::getNrPages() const {
    return nrPages;
}

int Book::getPrice() const {
    return price;
}

Book::Book(int nrPages, int price) : nrPages(nrPages), price(price) {}

Book::Book() {}
