//
// Created by Andrada on 15/06/2023.
//

#ifndef STRIMBU_ANDRADA_X_SHOP_H
#define STRIMBU_ANDRADA_X_SHOP_H
#include <list>
#include "Article.h"
using namespace std;

class Shop {
private:
    list<Article*>items;
public:
    Shop Add(Article* item);
    int GetTotalPrice();
    int GetQuantity(string type);
    void List();
};


#endif //STRIMBU_ANDRADA_X_SHOP_H
