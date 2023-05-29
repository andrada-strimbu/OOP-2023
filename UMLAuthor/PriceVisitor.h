//
// Created by Andrada on 19/05/2023.
//

#ifndef UMLVISITOR_PRICEVISITOR_H
#define UMLVISITOR_PRICEVISITOR_H


#include "Visitor.h"

class PriceVisitor: public Visitor {
public:
    void Visit(Book *book) override;

    void Visit(Pen *pen) override;

};


#endif //UMLVISITOR_PRICEVISITOR_H
