//
// Created by Andrada on 19/05/2023.
//

#ifndef UMLVISITOR_AUTHOR_H
#define UMLVISITOR_AUTHOR_H
#include<string>

using namespace std;

class Author {
private:
    string surname;
    string firstname;
public:
    const string &getSurname() const;

    const string &getFirstname() const;

    Author();

    Author(const string &surname, const string &firstname);
};


#endif //UMLVISITOR_AUTHOR_H
