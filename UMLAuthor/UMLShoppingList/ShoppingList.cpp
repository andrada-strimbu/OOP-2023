//
// Created by Andrada on 18/05/2023.
//

#include "ShoppingList.h"

void ShoppingList::addItem(Item *i) {
items.push_back(i);
}

void ShoppingList::printList() {
    for(auto it=items.begin(); it!=items.end();it++)
    {
        cout<<(*it)->getName()<<": "<<(*it)->getInfo()<<endl;
    }

}
