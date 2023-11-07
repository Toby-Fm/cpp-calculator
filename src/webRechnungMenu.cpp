#include "include/webRechnung.hpp"

void webRechnung() {
    std::cout << "\n+----------------------------------------------------------------------+" << std::endl;
    std::cout << "\nEs stehen folgende elemente zur verfügung\n\n(1): Pixel (px)\n(2): EM\n(3): REM\n(4): ViewerHigh (VH)\n(5): ViewerWidth (VW)" << std::endl;
    std::cout << "\n+-----------------------+" << std::endl;
    std::cout << "\n| Anfangen zu (R)echnen |" << std::endl;
    std::cout << "\n+-----------------------+" << std::endl;
    std::cout << "\n\n(b): Beenden\n\nInput: ";

    char input = ' ';
    std::cin >> input;

    switch (input) {
        case 'R' | 'r': {
            elementInput();
            break;
        }

        case 'b': {
            return;
            break;
        }
        default: {
            std::cout << "die Nummer wurde nicht gefunden" << std::endl;
            return;
            break;
        }
    }
}