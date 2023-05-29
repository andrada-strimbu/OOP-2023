//
// Created by Andrada on 18/05/2023.
//

#ifndef SHOPPINGLIST_SHOPPINGLIST_H
#define SHOPPINGLIST_SHOPPINGLIST_H
#include "Item.h"
#include <list>
#include <iostream>

using namespace std;
using List = std:: list  <Item*>;
class ShoppingList {
private:
 list <Item*> items;
public:
    void addItem(Item* i);
    void printList();

};


#endif //SHOPPINGLIST_SHOPPINGLIST_H
