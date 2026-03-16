#include <iostream>
using namespace std;

int main() {

    int n;
    cout << "n: ";
    cin >> n;

    int copia = n;
    int ultimo;

    // De derecha a izquierda
    if (copia == 0) {
        cout << 0 << endl;
    } else {
        while (copia > 0) {
            ultimo = copia % 10;
            cout << ultimo << endl;
            copia = copia / 10;
        }
    }

    cout << "--------------" << endl;

    // De izquierda a derecha
    copia = n;

    if (copia == 0) {
        cout << 0 << endl;
        return 0;
    }

    int potencia = 1;

    // hallar potencia más grande
    while (copia >= 10) {
        copia = copia / 10;
        potencia = potencia * 10;
    }

    copia = n;

    while (potencia > 0) {
        ultimo = copia / potencia;
        cout << ultimo << endl;

        copia = copia % potencia;
        potencia = potencia / 10;
    }

    return 0;
}