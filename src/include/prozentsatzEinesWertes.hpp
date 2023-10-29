#pragma once
#include <iostream>

void prozentsatzEinesWertes() {
    float number1 = getInputNumber(1);
    float number2 = getInputNumber(2);
    float result = number1 / number2 * 100;

    printResult(result, true);
}