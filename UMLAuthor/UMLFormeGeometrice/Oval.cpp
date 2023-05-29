//
// Created by Andrada on 18/05/2023.
//

#include "Oval.h"
#include<iostream>
#include <string>

using namespace std;
void Oval::set(int x, int y, int raza1, int raza2) {
    this->x=x;
    this->y=y;
    this->raza1=raza1;
    this->raza2=raza2;

}

void Oval::Paint() {
    cout<<endl;
    cout<<"oval( "<<to_string(this->x)<<", "<<to_string(this->y)<<", "<<to_string(this->raza1)<<", "<<to_string(this->raza1)<<")";

}
