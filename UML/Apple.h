//
// Created by Andrada on 15/06/2023.
//

#ifndef STRIMBU_ANDRADA_X_APPLE_H
#define STRIMBU_ANDRADA_X_APPLE_H
#include<iostream>

#include "Article.h"

using namespace std;
class Apple: public Article{
private:
    string from;
    int price;
    int quantity;
public:
    Apple(int price, int quantity, string from);
    string GetType() override;

    int GetQuantity() override;

    int GetPrice() override;

    void Print() override;
};


#endif //STRIMBU_ANDRADA_X_APPLE_H
