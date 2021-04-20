//============================================================================
// Name        : ejercicio5_ayed.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	cout << "Ingresar dos valores numericos enteros" << endl;
	int num1, num2;
	cin >> num1 >> num2;

	if ( num1 == num2)
	{
	   cout << "Los valores ingresados son iguales" << endl;

	}
	else
	{
	  if( num1 > num2)
	  {
	     cout << "El numero mayor es " << num1 << endl;
	     cout << "El numero menor es " << num2 << endl;
	  }
	  else
	  {
	     if( num2 > num1)
	          {
	             cout << "El numero mayor es " << num2 << endl;
	             cout << "El numero menor es " << num1 << endl;
	          }
	  }
	}
	return 0;
}
