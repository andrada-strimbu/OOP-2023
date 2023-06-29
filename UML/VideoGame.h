//
// Created by Andrada on 15/06/2023.
//

#ifndef STRIMBU_ANDRADA_X_VIDEOGAME_H
#define STRIMBU_ANDRADA_X_VIDEOGAME_H

#include<iostream>
#include "Article.h"

using namespace std;
class VideoGame: public Article {
private:
    string platform;
    string name;
    int price;
    int quantity;
public:
  VideoGame(int price, int quantity, string platform, string name);
    string GetType() override;

    int GetQuantity() override;

    int GetPrice() override;

    void Print() override;
};


#endif //STRIMBU_ANDRADA_X_VIDEOGAME_H
