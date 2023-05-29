//
// Created by Andrada on 19/05/2023.
//

#include "Angajat.h"

Angajat::Angajat(string nume, int salariu, int id) {
this->nume=nume;
this->salariu=salariu;
this->id=id;

}

string Angajat::GetName() {
    return this->nume;
}

int Angajat::GetSalariu() {
    return this->salariu;
}

bool Angajat::SetSalariu(int salariu) {
    this->salariu=salariu;
    return true;
}

int Angajat::GetId() {
    return this->id;
}
