/*
Autor: Mathias Yupa
Fecha: 15 de marzo, 2026
Descripcion: Patron cuadriculado de cuadrados
*/
#include <iostream>
using namespace std;

int main() {
	cout << "n: ";
    int n;
    cin >> n;

    for (int i = 0; i < n * n; i++) {
        for (int j = 0; j < n * n; j++) {

            if (((i / n) + (j / n)) % 2 == 0)
                cout << "X ";
            else
                cout << ". ";
        }
        cout << endl;
    }
}