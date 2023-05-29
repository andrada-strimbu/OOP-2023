//
// Created by Andrada on 19/05/2023.
//

#ifndef UMLVISITOR_VISITOR_H
#define UMLVISITOR_VISITOR_H


#include "Book.h"
#include "Pen.h"

class Visitor {
private:
    list<Book*> books;
    list<Pen* >pens;
public:
    virtual void Visit(Book* book)=0;
    virtual void Visit(Pen* pen)=0;

};


#endif //UMLVISITOR_VISITOR_H
