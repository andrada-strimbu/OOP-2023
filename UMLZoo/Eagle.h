//
// Created by Andrada on 18/05/2023.
//

#ifndef UMLZOO_EAGLE_H
#define UMLZOO_EAGLE_H


#include "Animal.h"

class Eagle: public Animal {
public:
    string GetName() override;

    bool IsAFish() override;

    bool IsABird() override;

    bool IsAMammal() override;

};


#endif //UMLZOO_EAGLE_H
