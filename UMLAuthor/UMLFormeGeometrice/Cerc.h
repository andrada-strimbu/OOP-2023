//
// Created by Andrada on 18/05/2023.
//

#ifndef UMLFORMEGEOMETRICE_CERC_H
#define UMLFORMEGEOMETRICE_CERC_H


#include "Forma.h"

class Cerc: public Forma {
private:
    int x;
    int y;
    int raza;
public:
    void set(int x, int y, int raza);

    void Paint() override;

};


#endif //UMLFORMEGEOMETRICE_CERC_H
