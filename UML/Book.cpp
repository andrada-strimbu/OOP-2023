//
// Created by Andrada on 15/06/2023.
//

#include "Book.h"

string Book::GetType() {
    return "Book";
}

int Book::GetQuantity() {
    return quantity;
}

int Book::GetPrice() {
    return price;
}

void Book::Print() {
cout<<"Book"<<"(Title="<<title<<", Author="<<author<<") "<<"Price="<<price<<" Quantity="<<quantity<<endl;
}

Book::Book(int price, int quantity, const string& title, const string& author) {
this->price=price;
this->quantity=quantity;
this->title=title;
this->author=author;
}
