//
// Created by Andrada on 18/05/2023.
//

#include "DreptunghiRotit.h"
#include<string>
#include <iostream>
using namespace std;
void DreptunghiRotit::set(int x, int y, int lungime, int latime, int unghi) {
    Dreptunghi::set( x, y,  lungime,  latime);
    this->unghi=unghi;

}

void DreptunghiRotit::Paint() {
    Dreptunghi::Paint();
    cout<< "rotit la "<<to_string(this->unghi)<<" grade";
}
