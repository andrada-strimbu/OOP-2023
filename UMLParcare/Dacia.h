//
// Created by Andrada on 19/05/2023.
//

#ifndef UMLPARCARE_DACIA_H
#define UMLPARCARE_DACIA_H
#include <string>
#include "Masina.h"

using namespace std;

class Dacia: public Masina {
private:
    string color;
public:
    Dacia(const string &color);

    string GetColor() override;

    string GetName() override;

};


#endif //UMLPARCARE_DACIA_H
