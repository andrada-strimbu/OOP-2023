//
// Created by Andrada on 18/05/2023.
//

#include "Forme.h"
#include<iostream>

using namespace std;
void Forme::Add(Forma *forma) {
    this->forme.push_back(forma);

}

void Forme::Paint() {
  for(auto it=forme.begin();it!=forme.end();++it)
  {
      (*it)->Paint();
  }
}
