#include <iostream>
using namespace std;

int main(){

    int n;
    cout << "Numero: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {

        // Figura 1
        for (int j = 1; j <= i; j++)
            cout << "* ";
        for (int j = i+1; j <= n; j++)
            cout << "  ";

        cout << "   ";

        // Figura 2
        for (int j = 1; j <= n; j++)
            if (j <= n - i + 1)
                cout << "* ";
            else
                cout << "  ";

        cout << "   ";

        // Figura 3
        for (int j = 1; j <= n; j++)
            if (i + j >= n + 1)
                cout << "* ";
            else
                cout << "  ";

        cout << "   ";

        // Figura 4
        for (int j = 1; j <= n; j++)
            if (j >= i)
                cout << "* ";
            else
                cout << "  ";

        cout << endl;
    }

    return 0;
}