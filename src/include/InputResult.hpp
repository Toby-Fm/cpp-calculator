#pragma once
#include <iostream>

//prz Case Nummer 1
float getInputNumber(int number) {
    std::cout << "Gib die " << number << ". Zahl an: ";
    float input = 0;
    std::cin >> input;
    return input;
}

//Case 1
void printResult(float result) {
    std::cout << "\nErgebnis ist: " << result << "\n\n";
}

//Case 1 mit Prozentzeichen
void printResult(float result, bool withPercentage) {
    std::cout << "\nErgebnis ist: " << result;
    if (withPercentage) {
        std::cout << "%";
    }
    std::cout << "\n\n";
}

//prz Case Nummer 2
float przVeränderungInput(float number) {
    std::cout << "Gib den " << number << " Wert des gesamten ereignes ein: ";
    float input = 0;
    std::cin >> input;

    /*std::cout << "Gib den " << wert << " Wert des Teils ein: ";
    float wert2 = 0;
    std::cin >> wert2;*/
    
    return input;
}

//Für Case 2
void przPrintResult(float result, float number1) {
    std::cout << "\nHier sind: " << result << "% " << "von: " << number1 << std::endl;
}

//prz Case Nummer 3
float przSteigungSenkungInput(float& urspruenglicherPreis, float& aktuellerPreis) {
    std::cout << "Gib den Alten (ursprünglicher Preis) ein: ";
    std::cin >> urspruenglicherPreis;

    std::cout << "Gib den Neuen (aktueller Preis) ein: ";
    std::cin >> aktuellerPreis;

    return aktuellerPreis - urspruenglicherPreis;
}

//case 3
void przResultSteigungSenkung(float result) {
    if(result <= 0) {
        std::cout << "\nDie Prozentuale Senkung beträgt: " << result << "%" << std::endl;
    } else {
        std::cout << "\nDie Prozentuale Steigerung beträgt: " << result << "%" << std::endl;
    }
}