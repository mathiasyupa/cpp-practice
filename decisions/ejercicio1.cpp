#include <iostream>
using namespace std;

int main() {

    int edad_1;
    int edad_2;
    int edad_3;

    double precio_boleto;

    cout << "Edad persona 1: ";
    cin >> edad_1;

    cout << "Edad persona 2: ";
    cin >> edad_2;

    cout << "Edad persona 3: ";
    cin >> edad_3;

    cout << "Precio del boleto: ";
    cin >> precio_boleto;

    int entran_cine = 0;
    int entran_entretenimiento = 0;
    int total_personas = 3;

    int mayor = edad_1;

    if (edad_2 > mayor) {
        mayor = edad_2;
    }

    if (edad_3 > mayor) {
        mayor = edad_3;
    }

    if (mayor >= 18) {
        entran_cine = 1;
    }

    if (edad_1 < 18) {
        entran_entretenimiento = entran_entretenimiento + 1;
    }
    else if (edad_1 != mayor) {
        entran_entretenimiento = entran_entretenimiento + 1;
    }

    if (edad_2 < 18) {
        entran_entretenimiento = entran_entretenimiento + 1;
    }
    else if (edad_2 != mayor) {
        entran_entretenimiento = entran_entretenimiento + 1;
    }

    if (edad_3 < 18) {
        entran_entretenimiento = entran_entretenimiento + 1;
    }
    else if (edad_3 != mayor) {
        entran_entretenimiento = entran_entretenimiento + 1;
    }

    double total = 0;

    int contador = 0;

    while (contador < total_personas) {

        int edad_actual;

        if (contador == 0) {
            edad_actual = edad_1;
        }
        else if (contador == 1) {
            edad_actual = edad_2;
        }
        else {
            edad_actual = edad_3;
        }

        if (edad_actual >= 65) {
            total = total + (precio_boleto * 0.5);
        }
        else if (edad_actual >= 18) {
            total = total + precio_boleto;
        }
        else {
            total = total + (precio_boleto * 0.7);
        }

        contador = contador + 1;
    }

    cout << "Entran al cine: " << entran_cine << endl;
    cout << "Entran al entretenimiento: " << entran_entretenimiento << endl;
    cout << "Total a pagar: " << total << endl;

    return 0;
}
