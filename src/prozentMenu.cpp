#include "include/prozent.hpp"

void prozentMenu() {
    std::cout << "\n+----------------------------------------------+\n" << std::endl;
    std::cout << "Für welchen zweck?\n\n(1): Prozentsatz eines Wertes (x% von x€)\n(2): Prozentsatzveränderung\n(3): Prozentuale Steigerung oder Senkung\n\n(i): Info/Beschreibung ansehen\n(b): Beenden\n\nInput: ";

    char prozentInput = ' ';
    std::cin >> prozentInput;

    switch (prozentInput) {
        case '1': {
            prozentsatzEinesWertes();
            prozentMenu();
            break;
        }
        case '2': {
            przVeränderung();
            prozentMenu();
            break;
        }
        case '3': {
            przSteigungSenkung();
            prozentMenu();
            break;
        }
        case 'i': {
            przInfo();
            prozentMenu();
            break;
        }
        case 'b': {
            return;
            break;
       }
       default : {
            std::cout << "\nUngültige Option! Bitte wählen Sie eine Nummer aus dem Menü." << std::endl;
            prozentMenu();
            break;
       }
    }
}
