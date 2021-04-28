//============================================================================
// Name        : 1_ayed.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

/*Se ingresa un valor numérico entero que representa el sueldo de una persona.
 Informar qué cantidad de billetes de cada una de las denominaciones existentes ($
 100, $ 50, $ 20, $ 10, $ 5, $ 2, $ 1) se debe utilizar para abonarlo.
 */
int doyCien(int s)
{
   int a = s/100;

   return a;
}
int doyCincuenta(int s)
{
   int a = s/50;

   return a;
}
int doyVeinte(int s)
{
   int a = s/20;

   return a;
}
int doyDiez(int s)
{
   int a = s/10;

   return a;
}
int doyCinco(int s)
{
   int a = s/5;

   return a;
}
int doyDos(int s)
{
   int a = s/2;

   return a;
}
int doyUno(int s)
{
   int a = s/1;

   return a;
}
int main()
{

   cout<<"Ingrese su sueldo"<<endl;
   int sueldo = 0;
   cin>>sueldo;

   //  int resto1 = sueldo-(doyCien(sueldo)*100);

   cout<<"Necesitas estos valores de cien "<<doyCien(sueldo)<<endl;

   sueldo = sueldo-(doyCien(sueldo)*100);

   cout<<"Necesitas estos valores de cincueta "<<doyCincuenta(sueldo)<<endl;

   sueldo = sueldo-(doyCincuenta(sueldo)*50);

   cout<<"Necesitas estos valores de veinte "<<doyVeinte(sueldo)<<endl;
   sueldo = sueldo-(doyVeinte(sueldo)*20);

   cout<<"Necesitas estos valores de diez "<<doyDiez(sueldo)<<endl;
   sueldo = sueldo-(doyDiez(sueldo)*10);

   cout<<"Necesitas estos valores de cinco "<<doyCinco(sueldo)<<endl;
   sueldo = sueldo-(doyCinco(sueldo)*5);

   cout<<"Necesitas estos valores de dos "<<doyDos(sueldo)<<endl;
   sueldo = sueldo-(doyDos(sueldo)*2);

   cout<<"Necesitas estos valores de uno "<<doyUno(sueldo)<<endl;

   return 0;
}
