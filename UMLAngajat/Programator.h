//
// Created by Andrada on 19/05/2023.
//

#ifndef UMLANGAJAT_PROGRAMATOR_H
#define UMLANGAJAT_PROGRAMATOR_H


#include "Angajat.h"

class Programator: public Angajat {
private:
    string cod;
public:
    void Lucreaza() override;
    void Add(string cod);
    Programator( string nume,int salariu,  int id);
    string GetCode();
};


#endif //UMLANGAJAT_PROGRAMATOR_H
