#pragma once

#include "head.hpp"
#include <string>

using namespace std; //Only for 'String' Variable

bool pixel_em(const string& element1, const string& element2) {
    return ((element1 == "pixel" || element1 == "PIXEL" || element1 == "Pixel" || element1 == "px" || element1 == "PX") &&
            (element2 == "em" || element2 == "EM"));
}

bool em_pixel(const string& element1, const string& element2) {
    return ((element1 == "em" || element1 == "EM") &&
            (element2 == "pixel" || element2 == "Pixel" || element2 == "PIXEL" || element2 == "px" || element2 == "PX"));
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

        float fontSize;
        std::cout << "Bitte geben Sie die Font-Size größe ein (in Pixelgröße): ";
        std::cin >> fontSize;

        float pixelGr;
        std::cout << element1 << " größe? : ";
        std::cin >> pixelGr;
        
        float result = pixelGr / fontSize;
        std::cout << "Die EM größe beträgt: " << result << "em \n(Beruht auf einer Font-Size größe von: " << fontSize << "px)" << std::endl;
        } else if (em_pixel(element1, element2)) {
            element1 = "EM";

            float fontSize;
            std::cout << "Bitte geben Sie die Font-Size größe ein: ";
            std::cin >> fontSize;

        } else {
        std::cout << "geht nicht" << std::endl;
    }   
}
