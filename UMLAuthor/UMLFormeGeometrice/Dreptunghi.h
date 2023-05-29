//
// Created by Andrada on 18/05/2023.
//

#ifndef UMLFORMEGEOMETRICE_DREPTUNGHI_H
#define UMLFORMEGEOMETRICE_DREPTUNGHI_H


#include "Forma.h"

class Dreptunghi: public Forma {
private:
    int x;
    int y;
    int lungime;
    int latime;
public:
    void set(int x, int y, int lungime, int latime);
    void Paint()override;


};


#endif //UMLFORMEGEOMETRICE_DREPTUNGHI_H
