#pragma once
#include <iostream>

//Aufforderung Zahlen einzugeben
float getInputNumber(int number) {
    std::cout << "Gib die " << number << ". Zahl an: ";
    float input = 0;
    std::cin >> input;
    return input;
}

//Gibt das Ergebnis beider Zahlen aus
void printResult(float result) {
    std::cout << "\nErgebnis ist: " << result << "\n\n";
}

//Gibt das Ergebnis aus, optional mit Prozentzeichen
void printResult(float result, bool withPercentage) {
    std::cout << "\nErgebnis ist: " << result;
    if (withPercentage) {
        std::cout << "%";
    }
    std::cout << "\n\n";
}