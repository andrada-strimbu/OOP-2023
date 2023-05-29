//
// Created by Andrada on 19/05/2023.
//

#include "Toyota.h"

string Toyota::GetColor() {
    return color;
}

string Toyota::GetName() {
    return "Toyota";
}

Toyota::Toyota(const string &color) : color(color) {}
