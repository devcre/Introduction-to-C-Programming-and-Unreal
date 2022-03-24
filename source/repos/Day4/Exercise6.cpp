// Copyright 2022. KyoungChan Cho. All Rights Reserved.

#define _USE_MATH_DEFINES

#include <iostream>
#include <cmath>

/**
 * Trigonometry with Floats
 * @return Exit status
*/

int main()
{
    float ValueSin;
    float ValueCos;

    std::cout << "Enter the degree of sin: ";
    std::cin >> ValueSin;

    std::cout << "Enter the degree of cos: ";
    std::cin >> ValueCos;

    std::cout << "Sin " << ValueSin << " degree: " << sinf(ValueSin * M_PI / 180) << "\n";
    std::cout << "Cos " << ValueCos << " degree: " << cosf(ValueCos * M_PI / 180) << "\n";

}


