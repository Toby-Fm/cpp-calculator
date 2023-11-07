#pragma once

#include "head.hpp"
#include <string>

using namespace std; //Only for 'String' Variable

bool pixel_em(const string& element1, const string& element2) {
    return ((element1 == "pixel" || element1 == "PIXEL" || element1 == "Pixel" || element1 == "px" || element1 == "PX") &&
            (element2 == "em" || element2 == "EM"));
}

void elementInput() {
    string element1;
    std::cout << "von? : ";
    std::cin >> element1;

    string element2;
    std::cout << "zu? : ";
    std::cin >> element2;

    if (pixel_em(element1, element2)) {
        element1 = "Pixel";

        int fontSize;
        std::cout << "Bitte geben Sie die Font-Size größe ein: ";
        cin >> fontSize;

        float pixelGr;
        std::cout << element1 << " größe? : ";
        cin >> pixelGr;
        
        float result = fontSize + pixelGr;
        std::cout << result << std::endl;
    } else {
        std::cout << "geht nicht" << std::endl;
    }
}