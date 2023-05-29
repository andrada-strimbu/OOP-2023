//
// Created by Andrada on 18/05/2023.
//

#ifndef UMLZOO_COW_H
#define UMLZOO_COW_H


#include "Animal.h"

class Cow : public Animal{
public:
    string GetName() override;

    bool IsAFish() override;

    bool IsABird() override;

    bool IsAMammal() override;
};


#endif //UMLZOO_COW_H
