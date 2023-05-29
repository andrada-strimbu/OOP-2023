//
// Created by Andrada on 18/05/2023.
//

#ifndef SHOPPINGLIST_MISCELLANEOUS_H
#define SHOPPINGLIST_MISCELLANEOUS_H


#include "Item.h"

using namespace std;
class Miscellaneous: public Item{
private:
    int count;
public:
    string getInfo() override;
    void setCount(int count);

};


#endif //SHOPPINGLIST_MISCELLANEOUS_H
