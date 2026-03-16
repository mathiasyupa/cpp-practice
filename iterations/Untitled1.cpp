#include <iostream>
using namespace std;

int main() {

    // Ejercicio A: factorial
    int n;                 // numero para calcular n!
    cout << "Entero no negativo: ";
    cin >> n;

    while (n < 0) {        // valida que sea no negativo
        cout << "Error: debe ser no negativo. Intente otra vez: ";
        cin >> n;
    }

    int n_i = 0;           // contador de vueltas (0 hasta n)
    long long n_fac = 1;   // acumulador del factorial
    int sum = 0;           // numero que se multiplca

    while (n_i < n) {      // se repite n veces
        n_fac = n_fac * (sum + 1);
        sum = sum + 1;
        n_i = n_i + 1;
    }

    cout << "Este es el resultado del factorial: " << n_fac << endl;


    // Ejercicio B: constante e
    int n_e;               // precision = cantidad de terminos despues del 1
    cout << "Precision de e: ";
    cin >> n_e;

    while (n_e < 0) {      // valida que no sea negativa
        cout << "Error: la precision no puede ser negativa. Intente otra vez: ";
        cin >> n_e;
    }

    int n_i_e = 0;         // contador de terminos sumados
    double n_fac_e = 1;    // factorial acumulado 
    double sum_e = 0;      // numero que va creciendo: 1,2,3 etc
    double e = 1;          // empieza en 1 (termino 1/0!)

    while (n_i_e < n_e) {  // suma n_e terminos extra
        n_fac_e = n_fac_e * (sum_e + 1);
        e = e + 1.0 / n_fac_e;
        sum_e = sum_e + 1;
        n_i_e = n_i_e + 1;
    }

    cout.setf(ios::fixed);
    cout.precision(6);
    cout << "Este es el resultado de e : " << e << endl;



    // Ejercicio C: e^x
    double e_x = 1;        // acumulador de la suma (empieza en 1)
    double x_0;            // valor de x
    cout << "e elevado a: ";
    cin >> x_0;

    int n_e2;              // precision para ex (terminos despues del 1)
    cout << "Precision de e^x: ";
    cin >> n_e2;

    while (n_e2 < 0) {     // valida que no sea negativa
        cout << "Error: la precision no puede ser negativa. Intente otra vez: ";
        cin >> n_e2;
    }

    // reinicio variables para esta parte
    n_i_e = 0;             // contador de terminos
    n_fac_e = 1;           // factorial acumulado
    sum_e = 0;             // numero para factorial
    double x = 1;          // potencia acumulada: x, x2, etc

    while (n_i_e < n_e2) {
        n_fac_e = n_fac_e * (sum_e + 1); // 1!,2!,3!...
        x = x * x_0;                     // x1, x2 etc

        e_x = e_x + x / n_fac_e;         // suma del termino
        sum_e = sum_e + 1;
        n_i_e = n_i_e + 1;
    }

    cout.precision(6);
    cout << "resultado de la potenciacion: " << e_x << endl;

    return 0;
}