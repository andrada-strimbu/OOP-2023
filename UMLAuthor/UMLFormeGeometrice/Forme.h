//
// Created by Andrada on 18/05/2023.
//

#ifndef UMLFORMEGEOMETRICE_FORME_H
#define UMLFORMEGEOMETRICE_FORME_H


#include "Forma.h"
#include <list>

using namespace std;
using List= std:: list <Forma*> ;
class Forme : public Forma{
private:
    list <Forma*> forme;
public:

    void Add(Forma* forma);

    void Paint() override;

};


#endif //UMLFORMEGEOMETRICE_FORME_H
