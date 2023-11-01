#pragma once
#include <iostream>

void przSteigungSenkung() {
    float urspruenglicherPreis, aktuellerPreis;
    float veränderung = przSteigungSenkungInput(urspruenglicherPreis, aktuellerPreis);

    float result = (veränderung / urspruenglicherPreis) * 100;

    przResultSteigungSenkung(result);
}
