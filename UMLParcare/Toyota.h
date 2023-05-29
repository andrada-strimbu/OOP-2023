//
// Created by Andrada on 19/05/2023.
//

#ifndef UMLPARCARE_TOYOTA_H
#define UMLPARCARE_TOYOTA_H
#include <string>
#include "Masina.h"

using namespace std;

class Toyota: public Masina {
private:
    string color;
public:
     Toyota(const string &color);

    string GetColor() override;

    string GetName() override;

};


#endif //UMLPARCARE_TOYOTA_H
