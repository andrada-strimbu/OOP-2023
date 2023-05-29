//
// Created by Andrada on 19/05/2023.
//

#include "Author.h"

const string &Author::getSurname() const {
    return surname;
}

const string &Author::getFirstname() const {
    return firstname;
}

Author::Author(const string &surname, const string &firstname) : surname(surname), firstname(firstname) {}

Author::Author() {}
