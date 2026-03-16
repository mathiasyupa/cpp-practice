/*
Autor: Mathias Yupa
Fecha: 15 de marzo, 2026
Descripcion: Piramide que va aumentando
*/
#include <iostream>
using namespace std;

int main() {

    int n;
    cout << "Num: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {

        // espacios
        for (int j = 1; j <= n - i; j++) {
            cout << " ";
        }

        // subir
        for (int j = 1; j <= i; j++) {
            cout << j;
        }

        // bajar
        for (int j = i - 1; j >= 1; j--) {
            cout << j;
        }

        cout << endl;
    }

    return 0;
}
	