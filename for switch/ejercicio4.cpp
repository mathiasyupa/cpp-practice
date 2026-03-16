/*
Autor: Mathias Yupa
Fecha: 15 de marzo, 2026
Descripcion: Usando switch para poner numeros 
de manera escrita
*/
#include <iostream>
using namespace std;

int main() {

    int n;
    
    cout << "Ingrese un numero entero positivo menor a 1000: ";
    cin >> n;

    if (n <= 0 || n >= 1000) {
        cout << "Error: numero fuera de rango";
        return 0;
    }

    int centenas = n / 100;
    int decenas = (n % 100) / 10;
    int unidades = n % 10;

    // CENTENAS
    switch (centenas) {
        case 1:
            if (n == 100)
                cout << "cien ";
            else
                cout << "ciento ";
            break;
        case 2: cout << "doscientos "; break;
        case 3: cout << "trescientos "; break;
        case 4: cout << "cuatrocientos "; break;
        case 5: cout << "quinientos "; break;
        case 6: cout << "seiscientos "; break;
        case 7: cout << "setecientos "; break;
        case 8: cout << "ochocientos "; break;
        case 9: cout << "novecientos "; break;
    }

    // DECENAS
    if (decenas == 1) {
        switch (unidades) {
            case 0: cout << "diez"; break;
            case 1: cout << "once"; break;
            case 2: cout << "doce"; break;
            case 3: cout << "trece"; break;
            case 4: cout << "catorce"; break;
            case 5: cout << "quince"; break;
            case 6: cout << "dieciseis"; break;
            case 7: cout << "diecisiete"; break;
            case 8: cout << "dieciocho"; break;
            case 9: cout << "diecinueve"; break;
        }
    } 
    else {

        switch (decenas) {
            case 2: cout << "veinte "; break;
            case 3: cout << "treinta "; break;
            case 4: cout << "cuarenta "; break;
            case 5: cout << "cincuenta "; break;
            case 6: cout << "sesenta "; break;
            case 7: cout << "setenta "; break;
            case 8: cout << "ochenta "; break;
            case 9: cout << "noventa "; break;
        }

        if (decenas >= 2 && unidades > 0)
            cout << "y ";

        // UNIDADES
        switch (unidades) {
            case 1: cout << "uno"; break;
            case 2: cout << "dos"; break;
            case 3: cout << "tres"; break;
            case 4: cout << "cuatro"; break;
            case 5: cout << "cinco"; break;
            case 6: cout << "seis"; break;
            case 7: cout << "siete"; break;
            case 8: cout << "ocho"; break;
            case 9: cout << "nueve"; break;
        }
    }

    return 0;
}