#include <iostream>
#include "include/menu.hpp"

void menu() {
    std::cout << "\n+----------------------------------------------------------------------+" << std::endl;
    //Verfügbare modis anzeigen lassen
    std::cout << "\nWähle deinen Modus:\n\n(1): Addieren\n(2): Subtrahieren\n(3): Multiplizieren\n(4): Dividieren\n(5): Prozentrechnun\n(6): WebUmrechnungen\n\n(b): Beenden\n\nInput: ";

    //"input" Variable erstellen
    char input = ' ';
    std::cin >> input;

    switch (input) {
        case '1': { //Case 1 Addiert zahlen
            addition();
            menu();
            break;
        }
        case '2': { //Case 2 Subtrahiert zahlen
            subtraction();
            menu();
            break;
        }
        case '3': { //Case 3 Multipliziert zahlen
            multiply();
            menu();
            break;
        }
        case '4': { //Case 4 Dividiert zahlen
            division();
            menu();
            break;
        }
        case '5': {
            prozentMenu();
            break;
        }
        case '6': {
            webRechnung();
            break;
        }
        case 'b': { //Case "b" Beendet das Programm
            return;
            break;
        }
        default: {
            std::cout << "\n\nEs gibt nur die Funktionen 1, 2, 3, 4 & b (Beenden). Versuche es erneut." << std::endl;
            menu();
            return;
            break;
        } 
    }
}