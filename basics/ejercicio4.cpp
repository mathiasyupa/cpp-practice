#include <iostream>
using namespace std;

int main() {
	
	
    double peso_oro; 
    cout << "Ingresa el peso total de polvo de oro (en gramos): ";
    cin >> peso_oro;

    // Calculando caunto a cada hermanao
    double juan = peso_oro * 0.5;  
    double pedro = peso_oro * (1.0 / 3.0);  
    double manuel = peso_oro * (1.0 / 9.0);  
    double iglesia = peso_oro - (juan + pedro + manuel);  

    // Lo que se tiro al mar despues de cada reparto
    double sobrante_juan = juan - (peso_oro * 0.5);  
    double sobrante_pedro = pedro - (peso_oro * (1.0 / 3.0));  
    double sobrante_manuel = manuel - (peso_oro * (1.0 / 9.0)); 
	
	 

    cout << "-------------------------------" << endl;
    cout << "Juan recibió: " << juan << " gramos (" << (juan / peso_oro * 100) << "% del total)" << endl;
    cout << "Pedro recibió: " << pedro << " gramos (" << (pedro / peso_oro * 100) << "% del total)" << endl;
    cout << "Manuel recibió: " << manuel << " gramos (" << (manuel / peso_oro * 100) << "% del total)" << endl;
    cout << "La iglesia recibió: " << iglesia << " gramos (" << (iglesia / peso_oro * 100) << "% del total)" << endl;

    cout << "-------------------------------" << endl;
    cout << "Sobrante de Juan: " << sobrante_juan << " gramos (" << (sobrante_juan / peso_oro * 100) << "% del total)" << endl;
    cout << "Sobrante de Pedro: " << sobrante_pedro << " gramos (" << (sobrante_pedro / peso_oro * 100) << "% del total)" << endl;
    cout << "Sobrante de Manuel: " << sobrante_manuel << " gramos (" << (sobrante_manuel / peso_oro * 100) << "% del total)" << endl;

    return 0;
}
