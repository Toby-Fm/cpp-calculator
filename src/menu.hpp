#include "head.hpp"
#include "addition.hpp"
#include "subtraction.hpp"
#include "multiply.hpp"
#include "division.hpp"

void menu() {
    std::cout << "\nWähle deinen Modus:\n\n(1): Addieren\n(2): Subtrahieren\n(3): Multiplizieren\n(4): Dividieren\n(b): Bennden" << std::endl;

    char input = ' ';
    std::cin >> input;

    switch (input) {
        case '1': {
            addition();
            break;
        }
        case '2': {
            subtraction();
            break;
        }
        case '3': {
            multiply();
            break;
        }
        case '4': {
            division();
            break;
        }
        case 'b': {
            return;
            break;
        }
        default: {
            std::cout << "try again" << std::endl;
            break;
        } 
    }
}