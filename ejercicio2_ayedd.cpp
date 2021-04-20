//============================================================================
// Name        : ejercicio2_ayedd.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
   cout << "Ingresar dos valores numericos: " << endl; // prints !!!Hello World!!!
     int a;
     int b;
     cin >>a;
     cin >>b;

     if (b==0)
     {
        cout << "La vidision por cero no existe, sos un boludo" << endl;

     }
     else
     {
        double div = a/(double)b;
        cout << "la division entre los numeros que ingreso es " << div << endl;
     }
	return 0;
}
