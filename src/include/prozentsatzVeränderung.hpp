#pragma once
#include <iostream>

void przVeränderung() {
    float number1 = przVeränderungInput(1);
    float number2 = przVeränderungInput(2);
    float result = number2 / number1 * 100;

    przPrintResult(result, number1);
}
