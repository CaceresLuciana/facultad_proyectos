//============================================================================
// Name        : ejercicio8_ayed.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main()
{
   cout<<"Ingrese una fecha en formato aaaammdd"<<endl;
   int fecha;

   cin>>fecha;

   int anio = fecha/10000;
   int dia = fecha%100;
   int a = fecha - (anio*10000);
   int mes = a/100;

   cout<<"la fecha ingresada es "<<anio<<"/"<<mes<<"/"<<dia<<endl;
   return 0;
}
