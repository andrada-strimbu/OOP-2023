//
// Created by Andrada on 18/05/2023.
//

#ifndef UMLMASINI_MASINAORAS_H
#define UMLMASINI_MASINAORAS_H

#include <string>
#include "Masina.h"

using namespace std;
class MasinaOras: public Masina {
public:
    virtual int  getCapacitate()=0;
    virtual string getCuloare()=0;
    //string getName()override;

};


#endif //UMLMASINI_MASINAORAS_H
