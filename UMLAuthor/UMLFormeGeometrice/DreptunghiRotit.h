//
// Created by Andrada on 18/05/2023.
//

#ifndef UMLFORMEGEOMETRICE_DREPTUNGHIROTIT_H
#define UMLFORMEGEOMETRICE_DREPTUNGHIROTIT_H


#include "Dreptunghi.h"

class DreptunghiRotit: public Dreptunghi {
private:
    int unghi;
public:
    void set(int x, int y, int lungime, int latime, int unghi);
    void Paint()override;


};


#endif //UMLFORMEGEOMETRICE_DREPTUNGHIROTIT_H
