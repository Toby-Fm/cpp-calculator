#pragma once

#include "head.hpp"
#include <string>

using namespace std; //Only for 'String' Variable

string elementInput() {
    string element1;
    std::cout << "von?" << std::endl;
    std::cin >> element1;

    string element2;
    std::cout << "zu?" << std::endl;
    std::cin >> element2;

    if (element1 = 'px' | 'PX' && element2 = 'em' | 'EM') {
        std::cout << "hello" << std::endl;
    }
}