//
// Created by Andrada on 29/05/2023.
//

#ifndef LAB7_HEADER_H
#define LAB7_HEADER_H
#pragma once

float operator""_Fahrenheit(unsigned long long temp) {
    return (float)((temp - 32.0) / 1.8);
}

float operator""_Kelvin(unsigned long long temp) {
    return (float)(temp - 273.15);
}


#endif //LAB7_HEADER_H
