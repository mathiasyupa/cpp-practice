#include <iostream>
using namespace std;

int main() {
    // Entradas de las latas
    double tamano_ld;  // Diámetro de la lata
    cout << "Diametro de la lata: ";
    cin >> tamano_ld;
    
    double tamano_la;  // Altura de la lata
    cout << "Altura de la lata: ";
    cin >> tamano_la;
    
    double peso_lata;  // Peso de la lata
    cout << "Peso de la lata: ";
    cin >> peso_lata;
    
    cout << "-----------------------" << endl;
    
    // Entradas de la caja
    double tamano_cl;  // Largo de la caja
    cout << "Largo de la caja: ";
    cin >> tamano_cl;
    
    double tamano_ca;  // Ancho de la caja
    cout << "Ancho de la caja: ";
    cin >> tamano_ca;
    
    double tamano_ch;  // Altura de la caja
    cout << "Altura de la caja: ";
    cin >> tamano_ch;
    
    // Calcular cuántas latas caben en la caja (filas y columnas)
    int filas = tamano_ch / tamano_la;  // Cuántas latas caben en la altura
    int columnas = tamano_ca / tamano_ld;  // Cuántas latas caben en el ancho
    
    // Número total de latas que caben en la caja
    int numero_latas = filas * columnas;
    
    // Cálculo del volumen de una lata (cilindro)
    double volumen_lata = 3.14159 * (tamano_ld / 2) * (tamano_ld / 2) * tamano_la;
    
    // Volumen total ocupado por las latas
    double volumen_total_latas = volumen_lata * numero_latas;
    
    // Volumen total de la caja
    double volumen_total_caja = tamano_cl * tamano_ca * tamano_ch;
    
    // Volumen de poliestireno necesario para llenar el espacio vacío
    double volumen_poliestireno = volumen_total_caja - volumen_total_latas;
    
    // Cálculo del peso total
    // Peso de las latas
    double peso_latas_total = numero_latas * peso_lata;
    
    // Peso del poliestireno (se asume que 1 cm³ de poliestireno pesa 0.5g)
    double peso_poliestireno = volumen_poliestireno * 0.5;
    
    // Área superficial de la caja (cartón)
    double area_caja = 2 * (tamano_cl * tamano_ca + tamano_cl * tamano_ch + tamano_ca * tamano_ch);
    
    // Peso del cartón de la caja (se asume que 1 cm² de cartón pesa 0.1g)
    double peso_carton = area_caja * 0.1;
    
    // Peso total de la caja (latas + poliestireno + cartón)
    double peso_total = peso_latas_total + peso_poliestireno + peso_carton;
    
    // Mostrar los resultados
    cout << "-----------------------" << endl;
    cout << "Cantidad de latas que caben en la caja: " << numero_latas << endl;
    cout << "Volumen de poliestireno necesario (cm^3): " << volumen_poliestireno << endl;
    cout << "Peso total de la caja (g): " << peso_total << endl;
    
    return 0;
}
