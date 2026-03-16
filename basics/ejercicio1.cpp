#include <iostream>
using namespace std;

int main (){
	
	double estatura_m;
	cout << "Ingresa tu estatura (metros): ";
	cin >> estatura_m;
	
	// En pies
	int estatura_calc1;
	estatura_calc1 = estatura_m * 3.28084;
	
	// En pulgadas
	double estatura_calc2;
	estatura_calc2 = estatura_m * 3.28084; 
	
	cout << "Tu estatura es: "<< estatura_calc1 << " ft " << estatura_calc2 << " inch" << endl;
	
	double estatura_ft;
	cout << "Ingresa tu estatura (pies): ";
	cin >> estatura_ft;
	
	//  en metros
	double estatura_calc3;
	estatura_calc3 = estatura_ft * (1/3.28084);
	cout << "Tu estatura es: " << estatura_calc3 << " m " << endl;
	
	
	//PESOS
	
	double peso_kg;
	cout << "Ingresa tu peso (kg): ";
	cin >> peso_kg;
	
	double peso_calc1, peso_calc2;
	peso_calc1 = peso_kg * 2.2046;
	peso_calc2 = peso_kg * 35.274;
	cout << "Tu peso en lb: " << peso_calc1 << endl;
	cout << "Tu peso en oz: " << peso_calc2 << endl;
	
	
	int peso_lb;
	cout << "Ingresa tu peso (lb):  ";
	cin >> peso_lb;
	
	double peso_calc3;
	peso_calc3 = peso_lb/2.2046;
	cout<< "Tu peso en kg es: " << peso_calc3 << endl;
	
	
	

	return 0;
}