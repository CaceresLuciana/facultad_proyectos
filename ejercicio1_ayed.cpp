//============================================================================
// Name        : ejercicio1_ayed.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main()
{
     cout << "Ingrese dos valores numericos enteros: ";
     int num1,num2;
     cin >> num1 >> num2;

     cout << num1 <<"+" << num2 << "=" << num1+num2 << endl;
     cout << num1 << "-" << num2 << "=" << num1-num2 << endl;
     cout << num1 << "x" << num2 << "=" << num1*num2 << endl;

     if (num2!=0)
     {
        cout << num1 << "/" << num2 << "=" << num1/(double)num2 << endl;
     }
     else
     {
        cout << "La division por cero no existe" << endl;

     }
	return 0;
}
