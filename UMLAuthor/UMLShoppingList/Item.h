//
// Created by Andrada on 18/05/2023.
//

#ifndef SHOPPINGLIST_ITEM_H
#define SHOPPINGLIST_ITEM_H

#include <string>

using namespace std;
class Item {
private:
    string name;
public:
    string getName();
    virtual string getInfo()=0;
    void setName(string name);


};


#endif //SHOPPINGLIST_ITEM_H
