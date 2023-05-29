//
// Created by Andrada on 18/05/2023.
//

#ifndef UMLFORMEGEOMETRICE_OVAL_H
#define UMLFORMEGEOMETRICE_OVAL_H


#include "Forma.h"

class Oval : public Forma{
private:
    int x;
    int y;
    int raza1;
    int raza2;
public:
    void set(int x, int y, int raza1, int raza2);

    void Paint() override;


};


#endif //UMLFORMEGEOMETRICE_OVAL_H
