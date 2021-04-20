//============================================================================
// Name        : ejercicio3_ayed.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	cout << "Ingrese un valor numerico entero: ";

	int num;
	cin >> num;

	// 1) mostrar la quinta parte del valor
	double quintaParte = num/(double)5;
	cout << "La quinta parte de " << num << " es " << quintaParte << endl;

	cout << "------------------------------------------------------" << endl;
   // 2) El resto que surge de dividir el valor ingresaado en cinco partes iguales
    int restoNum = num%5;
    cout << "El resto de dividir " << num << " es " << restoNum << endl;
    cout << "------------------------------------------------------" << endl;
	// 3) La septima parte de la quinta parte
   double septimaParte = quintaParte/(double)7;
   cout << "La septima parte de la quinta parte es " << septimaParte << endl;
   cout << "------------------------------------------------------" << endl;
	return 0;
}
