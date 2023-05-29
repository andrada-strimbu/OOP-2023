//
// Created by Andrada on 18/05/2023.
//

#ifndef UMLMASINI_RANGEROVER_H
#define UMLMASINI_RANGEROVER_H


#include "SUV.h"

class RangeRover: public SUV {
private:
    int consum;
public:
    void setConsum(int consum);
    int getConsum()override;
    string getName()override;

};


#endif //UMLMASINI_RANGEROVER_H
