//
// Created by Andrada on 18/05/2023.
//

#include "Dreptunghi.h"
#include<iostream>
using namespace std;
void Dreptunghi::set(int x, int y, int lungime, int latime) {
this->x=x;
this->y=y;
this->lungime=lungime;
this->latime=latime;
}

void Dreptunghi::Paint() {
    cout<<endl;
    cout<<"dreptunghi( "<<to_string(this->x)<<", "<<to_string(this->y)<<", "
    <<to_string(this->lungime)<<","<<to_string(this->latime)<<")";

}
