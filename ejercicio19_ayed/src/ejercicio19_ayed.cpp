//============================================================================
// Name        : ejercicio19_ayed.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

/*Docenas
 Se ingresan por teclado varios valores enteros (de a uno por vez). Se ingresa un
 valor negativo para indicar que finalizó la carga de datos.
 Se pide informar:
 1. Cuántos valores v fueron ingresados tal que v<=12.
 2. Cuántos valores v fueron ingresados tal que12<v<=24.
 3. Cuántos valores v fueron ingresados tal que 24<v<=36.
 4. Cuántos valores v fueron ingresados tal que v==0 (cero).
 */
bool menorDoce(int v)
{
   bool r = false;
   if( v<=12 && v>0 )
   {
      r = true;
   }
   return r;
}
bool menorQueA(int v)
{
   bool q = false;
   if( v<=24&&v>12 )
   {
      q = true;
   }
   return q;
}
bool menorQue(int v)
{
   bool t = false;
   if( v<=36&&v>24 )
   {
      t = true;
   }
   return t;
}
int main()
{
   int v;
   cout<<"Ingrese valores numericos"<<endl;
   int i = 0;
   int r = 0;
   int p = 0;
   int q = 0;

   while( v>=0 )
   {
      cin>>v;

      if( menorDoce(v) )
      {
         i++;
      }
      if( menorQueA(v) )
      {
         r++;
      }
      if( menorQue(v) )
      {
         p++;
      }
      if( v==0 )
      {
         q++;
      }
   }
   cout<<"Los numeros menores a doce son "<<i<<endl;
   cout<<"Los numeros que estan entre 12<v<=24 son "<<r<<endl;
   cout<<"Los numeros que estan entre 24<v<=36  "<<p<<endl;
   cout<<"Los numeros iguales a 0 son "<<q<<endl;
   return 0;
}
