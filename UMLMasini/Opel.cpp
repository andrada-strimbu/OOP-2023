//
// Created by Andrada on 18/05/2023.
//

#include "Opel.h"

void Opel::setCapacitate(int capacitate) {
this->capacitate=capacitate;
}

void Opel::setCuloare(string culoare) {
this->culoare=culoare;
}

void Opel::setAnFabricatie(int anFabricatie) {
this->anFabricatie=anFabricatie;
}

int Opel::getAnFabricatie() {
    return anFabricatie;
}

string Opel::getName() {
    return "Opel";
}

int Opel::getCapacitate() {
    return capacitate;
}

string Opel::getCuloare() {
    return culoare;
}
