//
// Created by Andrada on 18/05/2023.
//

#include "Food.h"

void Food::setQuantity(float quantity) {
this->quantity=quantity;
}

string Food::getInfo() {
    return "Am cumparat "+to_string(this->quantity)+" kg.";
}
