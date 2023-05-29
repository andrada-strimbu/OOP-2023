//
// Created by Andrada on 18/05/2023.
//

#ifndef UMLZOO_SHARK_H
#define UMLZOO_SHARK_H


#include "Animal.h"

class Shark : public Animal{
public:
    string GetName() override;

    bool IsAFish() override;

    bool IsABird() override;

    bool IsAMammal() override;

};


#endif //UMLZOO_SHARK_H
