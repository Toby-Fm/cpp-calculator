#include <iostream>

using namespace std;

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

void przInfo() {
    cout << "+------------------------+" << endl;
    cout << "| ProzentsatzEinesWertes |" << endl;
    cout << "+------------------------+" << endl;
    przEinesWertes_Info();
    
    cout << "\n" << endl;

    cout << "+------------------------+" << endl;
    cout << "| ProzentsatzEinesWertes |" << endl;
    cout << "+------------------------+" << endl;
    przVeränderung_Info();

    cout << "\n" << endl;

    cout << "+------------------------+" << endl;
    cout << "| Cooming Soon |" << endl;
    cout << "+------------------------+" << endl;
}
