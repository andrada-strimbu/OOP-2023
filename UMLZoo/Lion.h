//
// Created by Andrada on 18/05/2023.
//

#ifndef UMLZOO_LION_H
#define UMLZOO_LION_H


#include "Feline.h"

class Lion : public Feline{
public:
    int GetSpeed() override;

    string GetName() override;

    bool IsAFish() override;

    bool IsABird() override;

    bool IsAMammal() override;

};


#endif //UMLZOO_LION_H
