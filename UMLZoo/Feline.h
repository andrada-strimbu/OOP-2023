//
// Created by Andrada on 18/05/2023.
//

#ifndef UMLZOO_FELINE_H
#define UMLZOO_FELINE_H

#include <basetyps.h>
#include "Animal.h"

class Feline:public Animal{

public:
    virtual  int GetSpeed()=0;

};


#endif //UMLZOO_FELINE_H
