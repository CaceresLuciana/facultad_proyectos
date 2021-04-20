//============================================================================
// Name        : ejercicio11_ayed.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
// mal hecho
bool esAnioBisiesto(int z)
{
   int q;
   if( z%4==0 )
   {
      q = true;
   }
   else
   {
      q = false;
   }
   return z;
}

int obtenerDiasMes(int m, int a)
{
   int x;
   if( m==1||m==3||m==5||m==7||m==8||m==10||m==12 )
   {
      x = 31;
   }
   if( m==4||m==6||m==9||m==11 )
   {
      x = 30;
   }
   else
   {
      if( esAnioBisiesto(a) )
      {
         x = 29;
      }
      else
      {
         x = 28;
      }

   }

   return x;
}
int main()
{

   int m,a;
   cout<<"Ingrese un mes y año"<<endl;
   cin>>m>>a;

   int dias = obtenerDiasMes(m,a);

   cout<<"El mes "<<m<<" tiene "<<dias<<" dias"<<endl;

   return 0;
}
