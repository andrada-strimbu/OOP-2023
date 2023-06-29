//
// Created by Andrada on 15/06/2023.
//

#include "Apple.h"

string Apple::GetType() {
    return "Apple";
}

int Apple::GetQuantity() {
    return quantity;
}

int Apple::GetPrice() {
    return price;
}

void Apple::Print() {
    cout<<"Apple "<<"(From="<<from<<") "<<"Price="<<price<<" Quantity="<<quantity<<endl;
}

Apple::Apple(int price, int quantity, string from) {
    this->price=price;
    this->quantity=quantity;
    this->from=from;

}
