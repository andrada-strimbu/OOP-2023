//
// Created by Andrada on 19/05/2023.
//

#include "Pen.h"

void Pen::Accept(Visitor *visitor) {

}

const string &Pen::getColor() const {
    return color;
}

int Pen::getPrice() const {
    return price;
}

Pen::Pen() {}

Pen::Pen(const string &color, int price) : color(color), price(price) {}
