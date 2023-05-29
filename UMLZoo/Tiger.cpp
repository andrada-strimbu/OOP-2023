//
// Created by Andrada on 18/05/2023.
//

#include "Tiger.h"

string Tiger::GetName() {
    return "tiger";
}

bool Tiger::IsAFish() {
    return false;
}

bool Tiger::IsABird() {
    return false;
}

bool Tiger::IsAMammal() {
    return true;
}

int Tiger::GetSpeed() {
    return 80;
}
