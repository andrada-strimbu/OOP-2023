//
// Created by Andrada on 19/05/2023.
//

#include "Programator.h"

void Programator::Lucreaza() {
  cout<<"["<<GetName()<<"]"<<endl;
  cout<<cod<<endl;

}

Programator::Programator(string nume, int salariu, int id) : Angajat(nume, salariu, id) {

}

void Programator::Add(string cod) {
     this->cod=cod;
}

string Programator::GetCode() {
    return cod;
}
