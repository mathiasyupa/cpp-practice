#include <iostream>
using namespace std;

int main() {

    int n;
    cout << "numero: ";
    cin >> n;

    if (n < 1 or n > 98) {
        cout << "Error: n debe estar entre 1 y 98." << endl;
        return 0;
    }

    int entero = 1;
    int siguiente = 2;

    double suma = 0;
    int contador = 0;

    while (contador < n) {

        // calcular divisor correcto (10 o 100)
        int temp = siguiente;
        int divisor = 1;

        while (temp > 0) {
            divisor *= 10;
            temp /= 10;
        }

        double termino = entero + (double)siguiente / divisor;
        suma += termino;

        // imprimir formato
        cout << entero << "." << siguiente;

        if (contador != n - 1)
            cout << " + ";
        else
            cout << " = ";

        entero++;
        siguiente++;
        contador++;
    }

    cout << suma << endl;

    return 0;
}