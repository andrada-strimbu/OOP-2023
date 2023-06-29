//
// Created by Andrada on 15/06/2023.
//

#ifndef STRIMBU_ANDRADA_X_BOOK_H
#define STRIMBU_ANDRADA_X_BOOK_H

#include<iostream>
#include "Article.h"

using namespace std;
class Book: public Article{
private:
    int price;
    int quantity;
    string title;
    string author;
public:
    Book(int price, int quantity,const string& title, const string& author);
    string GetType() override;

    int GetQuantity() override;

    int GetPrice() override;

    void Print() override;
};


#endif //STRIMBU_ANDRADA_X_BOOK_H
