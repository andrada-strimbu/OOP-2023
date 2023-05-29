//
// Created by Andrada on 18/05/2023.
//

#include "Zoo.h"
#include<iostream>

using namespace std;
vector<Animal *> Zoo::GetFishes() {
   vector<Animal*> fish;
    for(auto it:animals)
    {
        if( it->IsAFish()==1)
             fish.push_back(it);
    }
    return fish;
}

vector<Animal *> Zoo::GetBirds() {
    vector<Animal*> birds;
    for(auto it: animals)
    {
        if(it->IsABird()==1)
            birds.push_back(it);
    }
    return birds;
}

vector<Feline *> Zoo::GetFeline() {
    vector<Feline*> felines;
    for (const auto& animal : animals) {
        Feline* feline = dynamic_cast<Feline*>(animal);
        if (feline)  {
            felines.push_back(feline);
        }
    }
    return felines;
}

int Zoo::GetTotalAnimals() {
   return animals.size();
}

void Zoo::operator+=(Animal* animal ) {
     animals.push_back(animal);
}

vector<Animal *> Zoo::GetMammals() {
    vector<Animal*> mammals;
    for(auto it:animals)
    {
        if( it->IsAMammal()==1)
            mammals.push_back(it);
    }
    return mammals;
}

bool Zoo::operator()(string name) {
    for(auto a :animals)
        if(a->GetName()==name)
            return true;
    return false;
}
