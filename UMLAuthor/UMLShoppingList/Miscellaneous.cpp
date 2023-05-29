//
// Created by Andrada on 18/05/2023.
//

#include "Miscellaneous.h"

void Miscellaneous::setCount(int count) {
  this->count=count;

}

string Miscellaneous::getInfo() {
    return "Am cumparat "+ to_string(this->count)+" .";
}
