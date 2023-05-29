//
// Created by Andrada on 18/05/2023.
//

#include "Dacia.h"

void Dacia::setCapacitate(int capacitate) {
this->capacitate=capacitate;
}

void Dacia::setCuloare(string culoare) {
this->culoare=culoare;
}

string Dacia::getName() {
    return "Dacia";
}

int Dacia::getCapacitate() {
    return capacitate;
}

string Dacia::getCuloare() {
    return culoare;
}
