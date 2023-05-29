//
// Created by Andrada on 19/05/2023.
//

#include "Manager.h"
#include"Angajat.h"
#include <iostream>

using namespace std;
void Manager::Lucreaza() {
 for(auto angajat:echipa)
 {
     angajat->Lucreaza();
 }

}

bool Manager::Angajeaza(Angajat *angajat) {
    echipa.push_back(angajat);
}

bool Manager::Concediaza(Angajat *angajat) {
    for(auto it=echipa.begin(); it!=echipa.end();it++)
        if((*it)->GetName()==angajat->GetName()){
            auto current= it--;
            echipa.erase(current);}
}

void Manager::GetAngajat(int id) {
   for(auto angajat:echipa)
       if(angajat->GetId()==id)
            cout<<angajat->GetName()<<", ";
   cout<<endl;
}

Manager::Manager( string numeEchipa,string nume, int salariu, int id)
        : Angajat(nume, salariu, id) {
    this->numeEchipa=numeEchipa;

}
