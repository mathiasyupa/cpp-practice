#include <iostream>
using namespace std;

int main() {

    int ldu_1;
    int flu_1;
    int ldu_2;
    int flu_2;

    cout << "Goles LDU en Brasil: ";
    cin >> ldu_1;

    cout << "Goles Fluminense en Brasil: ";
    cin >> flu_1;

    cout << "Goles LDU en Quito: ";
    cin >> ldu_2;

    cout << "Goles Fluminense en Quito: ";
    cin >> flu_2;

    int puntos_ldu = 0;
    int puntos_flu = 0;

    if (ldu_1 > flu_1) {
        puntos_ldu = puntos_ldu + 3;
    }
    else if (ldu_1 < flu_1) {
        puntos_flu = puntos_flu + 3;
    }
    else {
        puntos_ldu = puntos_ldu + 1;
        puntos_flu = puntos_flu + 1;
    }

    if (ldu_2 > flu_2) {
        puntos_ldu = puntos_ldu + 3;
    }
    else if (ldu_2 < flu_2) {
        puntos_flu = puntos_flu + 3;
    }
    else {
        puntos_ldu = puntos_ldu + 1;
        puntos_flu = puntos_flu + 1;
    }

    int goles_ldu = ldu_1 + ldu_2;
    int goles_flu = flu_1 + flu_2;

    int diferencia_ldu = goles_ldu - goles_flu;
    int diferencia_flu = goles_flu - goles_ldu;

    int visitante_ldu = ldu_1;
    int visitante_flu = flu_2;

    cout << "Puntos LDU: " << puntos_ldu << endl;
    cout << "Puntos Fluminense: " << puntos_flu << endl;

    if (puntos_ldu > puntos_flu) {
        cout << "Clasifica LDU" << endl;
    }
    else if (puntos_flu > puntos_ldu) {
        cout << "Clasifica Fluminense" << endl;
    }
    else {

        if (diferencia_ldu > diferencia_flu) {
            cout << "Clasifica LDU" << endl;
        }
        else if (diferencia_flu > diferencia_ldu) {
            cout << "Clasifica Fluminense" << endl;
        }
        else {

            if (visitante_ldu > visitante_flu) {
                cout << "Clasifica LDU" << endl;
            }
            else if (visitante_flu > visitante_ldu) {
                cout << "Clasifica Fluminense" << endl;
            }
            else {

                int penales_ldu;
                int penales_flu;

                cout << "Penales LDU (max 5): ";
                cin >> penales_ldu;

                cout << "Penales Fluminense (max 5): ";
                cin >> penales_flu;

                if (penales_ldu > penales_flu) {
                    cout << "Clasifica LDU" << endl;
                }
                else if (penales_flu > penales_ldu) {
                    cout << "Clasifica Fluminense" << endl;
                }
                else {
                    cout << "Empate total. No clasifica nadie." << endl;
                }
            }
        }
    }

    return 0;
}
