#include "include/prozent.hpp"

void prozentMenu() {
    std::cout << "\n+----------------------------------------------------------------------+\n" << std::endl;
    std::cout << "Für welchen zweck?\n\n(1): Prozentsatz eines Wertes (x% von x€)\n(2): Prozentsatzveränderung\n(3): Prozentuale Verteilung\n(4): Prozentuale Steigerung oder Senkung\n\n(i): Info/Beschreibung ansehen\n(b): Beenden\n\nInput: ";

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
            break;
        }
        case '4': {
            break;
        }
        case 'i': {
            //TODO: Beschreibungen der einzelnen M-Methoden hinschreiben
            przInfo();
            prozentMenu();
            break;
        }
        case 'b': {
            return;
            break;
        }
    }
}
