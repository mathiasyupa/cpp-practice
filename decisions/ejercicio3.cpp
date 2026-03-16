#include <iostream>
using namespace std;

int main() {

    double consulta_1;
    double consulta_2;
    double medio_semestre;
    double trabajo_final;

    cout << "Consulta 1: ";
    cin >> consulta_1;

    cout << "Consulta 2: ";
    cin >> consulta_2;

    cout << "Medio semestre: ";
    cin >> medio_semestre;

    cout << "Trabajo final: ";
    cin >> trabajo_final;

    int error = 0;

    if (consulta_1 < 1 || consulta_1 > 10 || (consulta_1*2 != (int)(consulta_1*2))) {
        cout << "Nota incorrecta en Consulta 1" << endl;
        error = 1;
    }

    if (consulta_2 < 1 || consulta_2 > 10 || (consulta_2*2 != (int)(consulta_2*2))) {
        cout << "Nota incorrecta en Consulta 2" << endl;
        error = 1;
    }

    if (medio_semestre < 1 || medio_semestre > 10 || (medio_semestre*2 != (int)(medio_semestre*2))) {
        cout << "Nota incorrecta en Medio semestre" << endl;
        error = 1;
    }

    if (trabajo_final < 1 || trabajo_final > 10 || (trabajo_final*2 != (int)(trabajo_final*2))) {
        cout << "Nota incorrecta en Trabajo final" << endl;
        error = 1;
    }

    if (error == 0) {

        double promedio_consultas = (consulta_1 + consulta_2) / 2;

        double nota_final =
            promedio_consultas * 0.3 +
            medio_semestre * 0.3 +
            trabajo_final * 0.4;

        cout << "Calificacion final: " << nota_final << endl;

        if (nota_final >= 9) {
            cout << "A Sobresaliente" << endl;
        }
        else if (nota_final >= 8) {
            cout << "B Muy bueno" << endl;
        }
        else if (nota_final >= 7) {
            cout << "C Regular" << endl;
        }
        else if (nota_final >= 6) {
            cout << "D Deficiente" << endl;
        }
        else {
            cout << "F Reprobado" << endl;
        }
    }

    return 0;
}
