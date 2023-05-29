//
// Created by Andrada on 18/05/2023.
//

#ifndef UMLMASINI_OPEL_H
#define UMLMASINI_OPEL_H


#include "MasinaOras.h"
#include <string>
using namespace std;
class Opel: public MasinaOras {
    private:
    int capacitate;
    string culoare;
    int anFabricatie;
public:
    void setCapacitate(int capacitate);
    void setCuloare(string culoare);
    void setAnFabricatie(int anFabricatie);
    int getAnFabricatie();
    string getName() override;
    int getCapacitate()override;
    string getCuloare()override;

};


#endif //UMLMASINI_OPEL_H
