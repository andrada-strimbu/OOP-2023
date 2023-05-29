//
// Created by Andrada on 19/05/2023.
//

#ifndef UMLPARCARE_FERRARIROSU_H
#define UMLPARCARE_FERRARIROSU_H

#include <string>
#include "Masina.h"

using namespace std;

class FerrariRosu: public Masina {

public:
    FerrariRosu();

    string GetColor() override;

    string GetName() override;

};


#endif //UMLPARCARE_FERRARIROSU_H
