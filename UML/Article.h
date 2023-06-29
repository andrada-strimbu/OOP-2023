//
// Created by Andrada on 15/06/2023.
//

#ifndef STRIMBU_ANDRADA_X_ARTICLE_H
#define STRIMBU_ANDRADA_X_ARTICLE_H
#include<string>

using namespace std;

class Article {
public:
    virtual string GetType()=0;
    virtual int GetQuantity()=0;
    virtual int GetPrice()=0;
    virtual void Print()=0;
};


#endif //STRIMBU_ANDRADA_X_ARTICLE_H
