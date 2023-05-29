//
// Created by Andrada on 19/05/2023.
//

#ifndef UMLVISITOR_BOOK_H
#define UMLVISITOR_BOOK_H
#include<list>
#include "Product.h"
#include "Visitor.h"
#include "Author.h"

using namespace std;
class Book: public Product {

private:
    int nrPages;
    int price;
    Author author;
public:
void Accept(Visitor* visitor) override;

    int getNrPages() const;

    Book();

    Book(int nrPages, int price);

    int getPrice() const;
    void AddAuthor(Author *author);
};


#endif //UMLVISITOR_BOOK_H
