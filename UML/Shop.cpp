//
// Created by Andrada on 15/06/2023.
//

#include "Shop.h"


int Shop::GetTotalPrice() {
    int total=0;
    for(auto item:items)
        total=total+ item->GetPrice();
    return total;
}

int Shop::GetQuantity(string type) {
    int quantityType=0;
    for(auto item:items)
        if(item->GetType()==type)
            quantityType=quantityType+item->GetQuantity();
    return quantityType;
}

void Shop::List() {
 for(auto item: items)
     item->Print();
}

Shop Shop::Add(Article* item) {
    items.push_back(item);
}

