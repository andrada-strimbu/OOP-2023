//
// Created by Andrada on 19/05/2023.
//

#ifndef UMLVISITOR_PRODUCT_H
#define UMLVISITOR_PRODUCT_H

#include<list>
#include "Visitor.h"

using namespace std;

class Product {
private:
    list<Visitor*>visitors;
public:
   virtual void Accept (Visitor* visitor)=0;
};


#endif //UMLVISITOR_PRODUCT_H
