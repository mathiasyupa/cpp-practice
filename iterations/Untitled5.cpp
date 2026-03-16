#include <iostream>
using namespace std;

int main() {
	
	int a {};
	cout << "a: ";
	cin >> a;
	
	int b {};
	cout << "b: ";
	cin >> b;
	
	
	int c {};
	cout << "c: ";
	cin >> c;
	
	if (a > 10 and a <-10 ){
		cout << "Error: fuera del rango";
	}
	
	int i {0};
	
	while (i == 4){
		
		cout << "sirve";
		
		i++;
	}
	
	return 0;
}