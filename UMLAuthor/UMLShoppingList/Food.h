//
// Created by Andrada on 18/05/2023.
//

#ifndef SHOPPINGLIST_FOOD_H
#define SHOPPINGLIST_FOOD_H

#include<string>
#include "Item.h"

using namespace std;
class Food: public Item {
private:
    float quantity;
public:
    void setQuantity(float quantity);
    string getInfo() override;


};


#endif //SHOPPINGLIST_FOOD_H
