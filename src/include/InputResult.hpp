#pragma once
#include <iostream>

float getInputNumber(float number) { //Aufforderung Zahlen einzugeben
    std::cout << "Gib die " << number << ". Zahl an: ";
    float input = 0;
    std::cin >> input;
    return input;
}

void printResult(float result) { //Gibt das Ergebnis beider Zahlen aus
    std::cout << "\nErgebnis ist: " << result << "\n\n";
}