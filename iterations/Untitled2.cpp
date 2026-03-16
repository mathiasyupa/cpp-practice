#include <iostream>
using namespace std;

int main() {

    int n;

    cout << "Numero entero no negativo: ";
    cin >> n;

    while (n < 0) {
        cout << "Error: debe ser no negativo. Intente otra vez: ";
        cin >> n;
    }

    int divisor = 2;

    while (n > 1) {

        if (n % divisor == 0) {
            cout << divisor << endl;
            n = n / divisor;
        } else {
            divisor = divisor + 1;
        }
    }

    return 0;
}