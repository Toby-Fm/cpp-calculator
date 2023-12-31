#include <iostream>

using namespace std;
//cout << "+----------------------------------------------+\n" << endl;
//cout << "|                                              |\n" << endl;
//cout << "+----------------------------------------------+\n" << endl;

void przEinesWertes_Info() {
    cout << "+--------------------------------+" << endl;
    cout << "| Sie berechnen einen bestimmten |" << endl;
    cout << "| Prozentsatz eines Werts. z.B.  |" << endl;
    cout << "| 20% von 100€                   |" << endl;
    cout << "+--------------------------------+" << endl;
}

void przVeränderung_Info() {
    cout << "+--------------------------------+" << endl;
    cout << "| Nummer 2 bezieht sich auf die  |" << endl;
    cout << "| Berechnung des Prozentsatzes,  |" << endl;
    cout << "| indem Sie den Wert des Teils   |" << endl;
    cout << "| durch den Wert des Gesmaten    |" << endl;
    cout << "| teilen und das Ergebnis mit    |" << endl;
    cout << "| 100 multiplizieren, um den     |" << endl;
    cout << "| Prozentsatz in Prozent auszu-  |" << endl;
    cout << "| drücken                        |" << endl;
    cout << "+--------------------------------+" << endl;
}

void przSteigungSenkung_Info() {
    cout << "+---------------------------------------------+" << endl;
    cout << "| Nummer 4 bezeiht sich auf die Berechnung    |" << endl;
    cout << "| der prozentualen Veränderungen zwischen     |" << endl;
    cout << "| einen alten Wert und einen neuen Wert, sei  |" << endl;
    cout << "| es eine Steigerung (positive Veränderung)   |" << endl;
    cout << "| oder eine Senkung (negative Veränderung),   |" << endl;
    cout << "| ausgedrückt in Prozent                      |" << endl;
    cout << "+---------------------------------------------+" << endl;
}

void przInfo() {
    cout << "+------------------------+" << endl;
    cout << "| ProzentsatzEinesWertes |" << endl;
    cout << "+------------------------+" << endl;
    przEinesWertes_Info();
    
    cout << "\n" << endl;
    cout << "+------------------------+" << endl;
    cout << "| ProzentsatzVeränderung |" << endl;
    cout << "+------------------------+" << endl;
    przVeränderung_Info();

    cout << "\n" << endl;

    cout << "+-------------------------------------+" << endl;
    cout << "| Prozentuale Steigerung oder Senkung |" << endl;
    cout << "+-------------------------------------+" << endl;
    przSteigungSenkung_Info();

    cout << "\n" << endl;
}
