//
// Created by Andrada on 19/05/2023.
//

#ifndef UMLVISITOR_PEN_H
#define UMLVISITOR_PEN_H
#include<string>

#include "Product.h"

class Pen: public Product {
private:
    string color;
    int price;
public:
    void Accept(Visitor *visitor) override;

    Pen(int price, const string &color);

    Pen();

    const string &getColor() const;

    int getPrice() const;
};


#endif //UMLVISITOR_PEN_H
