//
// Created by Andrada on 19/05/2023.
//

#ifndef UMLVISITOR_DETAILSVISITOR_H
#define UMLVISITOR_DETAILSVISITOR_H


#include "Visitor.h"

class DetailsVisitor: public Visitor{
public:
    void Visit(Book *book) override;

    void Visit(Pen *pen) override;

};


#endif //UMLVISITOR_DETAILSVISITOR_H
