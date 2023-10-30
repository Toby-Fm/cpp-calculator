#pragma once
#include <iostream>

//Aufforderung Zahlen einzugeben
float getInputNumber(int number) {
    std::cout << "Gib die " << number << ". Zahl an: ";
    float input = 0;
    std::cin >> input;
    return input;
}

//Für Case '2' -> ProzentsatzVeränderung eines Wertes 
float przVeränderungInput(int wert) {
    std::cout << "Gib den " << wert << " Wert des gesamten ereignes ein: ";
    float wert1 = 0;
    std::cin >> wert1;

    /*std::cout << "Gib den " << wert << " Wert des Teils ein: ";
    float wert2 = 0;
    std::cin >> wert2;*/
    
    return wert1;
}

//Gibt das Ergebnis beider Zahlen aus
void printResult(float result) {
    std::cout << "\nErgebnis ist: " << result << "\n\n";
}

//Gibt das Ergebnis aus, optional mit Prozentzeichen (Case 1 -> ProzentsatzEinesWertes)
void printResult(float result, bool withPercentage) {
    std::cout << "\nErgebnis ist: " << result;
    if (withPercentage) {
        std::cout << "%";
    }
    std::cout << "\n\n";
}

//Für Case '2' -> ProzentsatzVeränderung eines Wertes 
void przPrintResult(float result, float number1) {
    std::cout << "\nHier sind: " << result << "% " << "von: " << number1 << std::endl;
}