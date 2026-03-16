/*
Autor: Mathias Yupa
Fecha: 15 de marzo, 2026
Descripcion: Transforma numeros noramles
a numeros romanos
*/
#include <iostream>
using namespace std;

int main() {

    int n;
    
    cout << "Ingrese un numero entre 1 y 1000: ";
    cin >> n;

    if (n < 1 || n > 1000) {
        cout << "Error: numero fuera de rango";
        return 0;
    }

    int centenas = n / 100;
    int decenas = (n % 100) / 10;
    int unidades = n % 10;

    // CASO ESPECIAL 1000
    if (n == 1000) {
        cout << "M";
        return 0;
    }

    // CENTENAS
    switch (centenas) {
        case 1: cout << "C"; break;
        case 2: cout << "CC"; break;
        case 3: cout << "CCC"; break;
        case 4: cout << "CD"; break;
        case 5: cout << "D"; break;
        case 6: cout << "DC"; break;
        case 7: cout << "DCC"; break;
        case 8: cout << "DCCC"; break;
        case 9: cout << "CM"; break;
    }

    // DECENAS
    switch (decenas) {
        case 1: cout << "X"; break;
        case 2: cout << "XX"; break;
        case 3: cout << "XXX"; break;
        case 4: cout << "XL"; break;
        case 5: cout << "L"; break;
        case 6: cout << "LX"; break;
        case 7: cout << "LXX"; break;
        case 8: cout << "LXXX"; break;
        case 9: cout << "XC"; break;
    }

    // UNIDADES
    switch (unidades) {
        case 1: cout << "I"; break;
        case 2: cout << "II"; break;
        case 3: cout << "III"; break;
        case 4: cout << "IV"; break;
        case 5: cout << "V"; break;
        case 6: cout << "VI"; break;
        case 7: cout << "VII"; break;
        case 8: cout << "VIII"; break;
        case 9: cout << "IX"; break;
    }

    return 0;
}