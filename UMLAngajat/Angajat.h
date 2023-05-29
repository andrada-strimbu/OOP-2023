//
// Created by Andrada on 19/05/2023.
//

#ifndef UMLANGAJAT_ANGAJAT_H
#define UMLANGAJAT_ANGAJAT_H
#include<iostream>
#include<string>

using namespace std;

class Angajat {
private:
    int salariu;
    string nume;
    int id;
public:
    string GetName();
    int GetSalariu();
    int GetId();
    bool SetSalariu(int salariu);
    virtual void Lucreaza()=0;
    Angajat(string nume,int salariu,  int id);

};


#endif //UMLANGAJAT_ANGAJAT_H
