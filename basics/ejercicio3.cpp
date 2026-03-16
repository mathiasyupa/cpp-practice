#include <iostream>
using namespace std;

int main() {
    int asistentes;
    cout << "Asistentes totales que iran: ";
    cin >> asistentes;

    double precio;
    cout << "Precio de la entrada (sin IVA): ";
    cin >> precio;

    double paquete;
    cout << "Valor del paquete (producto y refrigerio por asistente): ";
    cin >> paquete;

    // Tercera edad
    int tercera_edad = asistentes * 0.35;

    // Médicos
    int medicos = asistentes * 0.25;

    // Público general
    int publico = asistentes - (medicos + tercera_edad);

    // Cálculo del IVA (solo para médicos y público general)
    double iva = precio * 0.15;  // IVA para los otros grupos

    // Precios para cada grupo
    double precio_a = (precio / 2) * tercera_edad;  // Precio para tercera edad con 50% descuento (sin IVA)
    double precio_m = (precio - (precio * 0.1)) * medicos;  // Precio para médicos con 10% descuento (sin IVA)
    double precio_p = precio * publico;  // Precio para público general (sin IVA)

    // IVA de médicos y público general
    double iva_m = iva * medicos;
    double iva_p = iva * publico;

    // Ganancia total (Ingresos por venta de entradas)
    double total_sin_iva = precio_a + precio_m + precio_p;  // Ingresos sin IVA
    double total = total_sin_iva + iva_m + iva_p;  // Ingresos totales con IVA

    // Gasto del paquete
    double gasto_paquete = paquete * asistentes;

    // Cálculos finales
    double iva_total = iva_m + iva_p;  // IVA total a pagar
    double costo_total = gasto_paquete + iva_total;  // Costo total de la empresa
    double ganancia_o_perdida = total - costo_total;  // Ganancia o pérdida de la empresa

    // Imprimir resultados
    cout << "-------------------------------" << endl;
    cout << "Cantidad de asistentes de la 3ra edad: " << tercera_edad << endl;
    cout << "Cantidad de medicos: " << medicos << endl;
    cout << "Cantidad de publico general: " << publico << endl;

    cout << "-------------------------------" << endl;
    cout << "Total de ingresos por venta de entradas (sin IVA): " << total_sin_iva << endl;
    cout << "Total de IVA a pagar: " << iva_total << endl;

    cout << "-------------------------------" << endl;
    cout << "Costo total (gasto de paquete + IVA): " << costo_total << endl;
    cout << "Ganancia o pérdida de la empresa: " << ganancia_o_perdida << endl;
    
    return 0;
}
