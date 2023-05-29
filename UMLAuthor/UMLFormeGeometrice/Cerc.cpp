//
// Created by Andrada on 18/05/2023.
//

#include "Cerc.h"
#include <iostream>
#include<string>
using namespace std;

void Cerc::set(int x, int y, int raza) {
this->x=x;
this->y=y;
this->raza=raza;
}

void Cerc::Paint() {
    cout<<endl;
    cout<<"cerc( "<<to_string(this->x)<<", "<<to_string(this->y)<<", "<<to_string(this->raza)<<")";

}
