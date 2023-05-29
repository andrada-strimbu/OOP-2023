//
// Created by Andrada on 19/05/2023.
//

#include "Dacia.h"

string Dacia::GetColor() {
    return color;
}

string Dacia::GetName() {
    return "Dacia";
}

Dacia::Dacia(const string &color) : color(color) {}

