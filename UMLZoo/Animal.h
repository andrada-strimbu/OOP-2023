//
// Created by Andrada on 18/05/2023.
//

#ifndef UMLZOO_ANIMAL_H
#define UMLZOO_ANIMAL_H

#include <basetyps.h>
#include<string>
using namespace std;
class Animal {
public:
    virtual string GetName()=0;
    virtual bool IsAFish()=0;
    virtual bool IsABird()=0;
    virtual bool IsAMammal()=0;

};


#endif //UMLZOO_ANIMAL_H
