//
// Created by Andrada on 19/05/2023.
//
#include "Parcare.h"
#include<iostream>
#include<list>
using namespace std;
void Parcare::Create(int maxCapacity) {
 this->maxCapacity=maxCapacity;
 this->count=0;
}

bool Parcare::Add(Masina *masina) {
    if(IsFull()!=true)
    {
        masini.push_back(masina);
        this->count++;
        return true;
    }
    return false;

}

void Parcare::RemoveByName(string name) {
  for(auto it = this->masini.begin(); it!=this->masini.end(); ++it)
      if((*it)->GetName()==name) {
          auto current=it--;
         this->masini.erase(current);
         this->count--;

      }
}

int Parcare::GetCount() const{
    return this->count;

}

bool Parcare::IsFull() const {
    if(this->count==maxCapacity)
        return true;
    else return false;
}

void Parcare::ShowAll() const {
    cout<<"SHOW ALL: ";
     for(auto masina:masini)
         cout<<masina->GetName()<<"( "<<masina->GetColor()<<"), ";
     cout<<endl;
}

void Parcare::ShowByColor(string color) const {
    cout<<"SHOW-COLOR: ";
    cout<<"( "<<color<<" ):";
    for(auto masina:masini)
        if(masina->GetColor()==color)
        cout<<masina->GetName()<<", ";
    cout<<endl;
}
