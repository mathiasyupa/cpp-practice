#include <iostream>
using namespace std;


int main() {
    // precio bebidas
    double vodka = 7;
    
    double brisa = 6.5;
    
    double golpe = 7.5;
    
    double jugo = 3;
    
    double cola = 1;

    // CANTIDAD
    cout << "Cantidad de cada bebida:" << endl;

    int c_vodka, c_brisa, c_golpe, c_jugo, c_cola;
    cout << "Master vodka: ";
    cin >> c_vodka;
    cout << "Brisa del Caribe: ";
    cin >> c_brisa;
    cout << "Golpe Blanco: ";
    cin >> c_golpe;
    cout << "Jugo de naranja: ";
    cin >> c_jugo;
    cout << "Cola: ";
    cin >> c_cola;

    // Precio de la orden 
    double precio = (c_vodka * vodka) + (c_brisa * brisa) + (c_golpe * golpe) + (c_jugo * jugo) + (c_cola * cola);

    // Cantidad de cada bebida para la preparacion
    // Ya transforme a ml las onzas
    
    //Vodka
    double v_vodka = 168.21 * c_vodka;
    double v_brisa = 29.57 * c_brisa;
    double v_golpe = 64.06 * c_golpe;
    double total_v = v_vodka + v_brisa + v_golpe;
	
	// ROn
    double r_vodka = 92.11 * c_vodka;
    double r_brisa = 118.29 * c_brisa;
    double r_golpe = 106.06 * c_golpe;
    double total_r = r_vodka + r_brisa + r_golpe;

	//Jugo
    double j_vodka = 46.06 * c_vodka;
    double j_brisa = 59.15 * c_brisa;
    double j_jugo = 473.18 * c_jugo;
    double total_j = j_vodka + j_brisa + j_jugo;

	//COlA
    double co_brisa = 59.15 * c_brisa;
    double co_golpe = 21.36 * c_golpe;
    double co_cola = 21.36 * c_cola;
    double total_co = co_brisa + co_golpe + co_cola;

    // Botellas necesarias 
    int botellas_v = int(total_v / 700) + (total_v / 700 - int(total_v / 700) > 0);  // Redondeo hacia arriba
    int botellas_r = int(total_r / 750) + (total_r / 750 - int(total_r / 750) > 0);
    int botellas_j = int(total_j / 2000) + (total_j / 2000 - int(total_j / 2000) > 0);
    int botellas_co = int(total_co / 1750) + (total_co / 1750 - int(total_co / 1750) > 0);

    //Costo de hacer el pedido
    double costo_v = botellas_v * 23;
    double costo_r = botellas_r * 12;
    double costo_j = botellas_j * 6;
    double costo_co = botellas_co * 1.5;
    double costo_total = costo_v + costo_r + costo_j + costo_co;

    // Sobrante 
    double sobra_v = (botellas_v * 700) - total_v;
    double sobra_r = (botellas_r * 750) - total_r;
    double sobra_j = (botellas_j * 2000) - total_j;
    double sobra_co = (botellas_co * 1750) - total_co;

    // Ganancia o perdida
    double g_p = precio - costo_total;

    // Salidas
    cout << "-----------------------" << endl;
    cout << "Precio de la orden: $" << precio << endl;
    cout << "-----------------------" << endl;
    cout << "Botellas de Vodka: " << botellas_v << endl;
    cout << "Botellas de Ron: " << botellas_r << endl;
    cout << "Botellas de Jugo: " << botellas_j << endl;
    cout << "Botellas de Cola: " << botellas_co << endl;
    cout << "-----------------------" << endl;
    cout << "Costo total: $" << costo_total << endl;
    cout << "-----------------------" << endl;
    cout << "Sobra de Vodka: " << sobra_v << " ml" << endl;
    cout << "Sobra de Ron: " << sobra_r << " ml" << endl;
    cout << "Sobra de Jugo: " << sobra_j << " ml" << endl;
    cout << "Sobra de Cola: " << sobra_co << " ml" << endl;
    cout << "-----------------------" << endl;
    cout << "Ganancia o Perdida: $" << g_p << endl;



    return 0;
}
