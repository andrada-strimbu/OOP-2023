//
// Created by Andrada on 18/05/2023.
//

#ifndef UMLZOO_ZOO_H
#define UMLZOO_ZOO_H
#include<vector>
#include "Animal.h"
#include "Feline.h"
#include<string>
using namespace std;
using Vector= vector <Animal*>;

class Zoo {
private:
    vector<Animal*> animals;
public:
    vector<Animal*> GetFishes();
    vector<Animal*> GetBirds();
    vector<Animal*> GetMammals();
    vector<Feline*> GetFeline();
    int GetTotalAnimals();
    void operator +=(Animal* animal);
    bool operator()(string name);


};


#endif //UMLZOO_ZOO_H
