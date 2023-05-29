//
// Created by Andrada on 18/05/2023.
//

#ifndef UMLMASINI_DACIA_H
#define UMLMASINI_DACIA_H


#include "MasinaOras.h"
#include <string>
using namespace std;
class Dacia: public MasinaOras {
private:
    int capacitate;
    string culoare;
public:
    void setCapacitate(int capacitate);
    void setCuloare(string culoare);
    string getName() override;
    int getCapacitate()override;
    string getCuloare()override;


};


#endif //UMLMASINI_DACIA_H
