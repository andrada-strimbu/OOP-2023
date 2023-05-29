//
// Created by Andrada on 18/05/2023.
//

#ifndef UMLZOO_TIGER_H
#define UMLZOO_TIGER_H


#include "Feline.h"

class Tiger: public Feline {
public:
    string GetName() override;

    bool IsAFish() override;

    bool IsABird() override;

    bool IsAMammal() override;

    int GetSpeed() override;

};


#endif //UMLZOO_TIGER_H
