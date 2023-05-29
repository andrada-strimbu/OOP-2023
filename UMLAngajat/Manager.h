//
// Created by Andrada on 19/05/2023.
//

#ifndef UMLANGAJAT_MANAGER_H
#define UMLANGAJAT_MANAGER_H

#include<list>
#include "Angajat.h"

class Manager: public Angajat {
private:
        list<Angajat*>echipa;
        string numeEchipa;
public:
    void Lucreaza() override;
    bool Angajeaza(Angajat * angajat);
    bool Concediaza(Angajat* angajat);
    void GetAngajat(int id);
    Manager( string numeEchipa, string nume, int salariu, int id);

};


#endif //UMLANGAJAT_MANAGER_H
